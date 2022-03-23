#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

int val=10;

void *thread_handler1(void *ptr)
{
        for(int i=0;i<=val;i++)
        {
                sleep(1);
                printf("Thread1 is running\n");
        }
}

void *thread_handler2(void *ptr)
{
        for(int i=1;i<=val;i++)
        {
                sleep(1);
                printf("Thread2 is running\n");
        }
}

int main()
{
        pthread_t thread[2];
        char *msg1 = "aravind";
        char *msg2 = "naik";
        pthread_create(&thread[0], NULL, &thread_handler1, (void *)msg1);
        pthread_create(&thread[1], NULL, &thread_handler2, (void *)msg2);
        pthread_join(thread[0],NULL);
        pthread_join(thread[1],NULL);
        return 0;
}
