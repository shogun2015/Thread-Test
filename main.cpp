#include <iostream>
#include <deque>

#include "Global.h"
#include "Thread_Start.h"
#include "Thread_End.h"


using namespace std;
pthread_mutex_t mutex_FIFO;


int main(int argc, char const *argv[])
{
    pthread_t t_Start, t_End;
    pthread_mutex_init(&mutex_FIFO, NULL);

    deque<int> FIFO;

    pthread_create(&t_Start, NULL, thread_Start, &FIFO);
    pthread_create(&t_End, NULL, thread_End, &FIFO);

    pthread_join(t_Start, NULL);
    pthread_join(t_End, NULL);

    pthread_mutex_destroy(&mutex_FIFO);
}
