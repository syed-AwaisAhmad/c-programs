#include<iostream>
#include <sys/types.h>
#include <unistd.h>
pid_t fork(void);
using namespace std;

int main()
	{ 
		int i = 48, pid = -1;
		pid = fork();
		if (pid == -1)
		{
			printf ("Fork failed\n"); 
			i++; 
			exit (1);
		}
		if (pid == 0) 
	{ 
		printf ("I am child process\n"); 
			i++; 
		} 
		else 
		{ 
		printf ("I am parent process\n"); 
			i++; 
	} 
	}

