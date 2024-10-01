#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct User {
	char id[10];
	char* userName;// dynamic memory placing
} User;

typedef struct message {
	char* content;// dynamic memory placing
	User* creator;
} Message;

typedef struct Post {
	Message postcontent;
	Message* replays;
	int replaysno;
}Post;

void createUser(User* user1) {///////////////first part
	user1->userName = (char*)malloc(100);
	if (!user1->userName){
		printf("error in allocation");
		free(user1->userName);
		exit(1);
	}
	printf("please enter user id here:");
	gets(user1->id);
	printf("\nplease enter user Name here:");
	gets(user1->userName);
	user1->userName = (char*)realloc(user1->userName, strlen(user1->userName) + 1);
	if (!user1->userName) {
		printf("error in allocation");
		free(user1->userName);
		exit(1);
	}
}

int createMessage(User* user, Message* message) {
	message->content = (char*)malloc(100 * sizeof(char));
	if (!message->content) {
		printf("error in allocation");
		free(message->content);
	}
	printf("\nplease enter your message: ");
	gets(message->content);
	message->content = (char*)realloc(message->content, strlen(message->content) + 1);
	if (!message->content) {
		printf("error in allocation");
		free(message->content);
	}
	message->creator = user->userName;
}

void createPost(User* user2, Post* post1) {///////////////// second part
	createMessage(user2, &post1->postcontent);
	post1->replays = 0;
	post1->replaysno = 0;
}

void addComment(User* user2, Post* post1) {
	post1->replaysno += 1;
	post1->replays = (Message*)realloc(post1->replays, (post1->replaysno)*sizeof(Message));
	createMessage(user2, &(post1->replays[post1->replaysno - 1]));
}

void printPost(const Post* post2) {
	printf("\nthe post is: %s", post2->postcontent.content);
	printf("\n the creator of the post is: %s", post2->postcontent.creator);
	for (int i = 0; i < post2->replaysno; i++) {
		printf("\n a comment on this post is: %s", post2->replays[i].content);
		printf("\n the writer of this post is: %s", post2->replays[i].creator);
	}
}
User* searchUser(User users[], int replaysno, char* userName) {
	for (int i = 0; i < replaysno; i++) {
		int same = strcmp(users[i].userName, userName);
		if (same == 0) {
			return &(users[i]);
		}
	}
	return NULL;
}

//////////////////////// third part - given code
#define MAX 10
#define SIZE 256
char loggedMenu() {
	char choise = 0;
	puts("\n*****What Would you like to do:****\n");
	puts("1-add Post to User\n");
	puts("2-View all posts to add a comment\n");
	puts("0-logOut\n");
	do {
		scanf(" %c", &choise);
		if ((choise < '0' || choise > '2'))
			printf("wrong choise - try again\n");
	} while (choise < '0' || choise > '2');
	return choise;
}
void main()
{
	User users[MAX];
	Post posts[MAX];
	int noOfUsers = 0, noOfPosts = 0;
	char userName[SIZE];
	char internalRes;
	int choosenPost = 0;
	internalRes = loggedMenu();
	while (internalRes != 0) {
		switch (internalRes) {
		case('1'):
			if (noOfUsers == 0) {
				printf("there are no users\nAdd a new User: \n");
				createUser(&users[0]);
				noOfUsers++;
				createPost(&users[0], posts + noOfPosts);
				noOfPosts++;
			}
			else
			{
				printf("\nPlease enter search user name:");
					fseek(stdin, 0, SEEK_END);
				gets(userName);
				User* userexist = searchUser(users, noOfUsers, userName);
				if (userexist == NULL) {
					printf("User does not exist\nAdd a new User: ");
					createUser(&users[noOfUsers]);
					userexist = &users[noOfUsers];
					noOfUsers++;
				}
				createPost(userexist, posts + noOfPosts);
				noOfPosts++;
			}
			break;
		case('2'):
			if (noOfPosts == 0)
				puts("no posts");
			else
			{
				for (int i = 0; i < noOfPosts; i++) {
					printf("%d)\n", i + 1);
					printPost(posts + i);
				}
				printf("\nPlease enter search user name:");
					fseek(stdin, 0, SEEK_END);
				gets(userName);
				User* userexist = searchUser(users, noOfUsers, userName);
				if (userexist != NULL) {
					puts("choose number of the post you want to comment(0 = non) : ");
						scanf("%d", &choosenPost);
					if (choosenPost > 0 && choosenPost <= noOfPosts)
						addComment(userexist, posts + choosenPost - 1);
				}
				else {
					printf("User does not exist,unable to comment on the post you selected\n");
				}
			}
			break;
		case('0'):
			puts("user logged out");//////////////////// my added code.
			for (int j = 0; j < noOfUsers; j++) {
				free(users[j].id);
				free(users[j].userName);
			}
			for (int p = 0; p < noOfPosts; p++) {
				free(posts[p].postcontent.content);
				free(posts[p].postcontent.creator);
				free(posts[p].replays->content);
				free(posts[p].replays->creator);
				free(posts[p].replaysno);
			}
			break;
		}
		internalRes = loggedMenu();
	}
}