#ifndef __LOGIN_H__
#define __LOGIN_H__
#define BUFF_SIZE 8192

typedef struct Node{
	char username[30];
	char pass[30];
	int status;
	int state;
	int sock;
	int ID;
	struct Node *next;
} node;

typedef struct Node1{
	char name[30];
	char cap[10];
	int online;
	struct Node1 *next;
} node1;

node *head; // first node
node1 *head1;
void addNode(char* user, char* password, int status);
void addNodeRoom(char* name, char *cap);
node *checkExist(char* user);
node1 *checkExistRoom(char* name);
int checkPass(char* user, char* pass);
int checkStatus(char* user);
int lockAccount(char* user);
void writeFile();
void writeRoomFile(int a);
void printlist();
#endif