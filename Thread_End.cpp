#include <iostream>
#include <stdio.h>
#include <deque>

#include "Thread_End.h"
#include "Global.h"

using namespace std;

void *thread_End(void *arg)
{
    deque<int> *FIFO = (deque<int> *)arg;
    while(1){
        pthread_mutex_lock(&mutex_FIFO);
        if (!FIFO->empty()){
            int num = FIFO->front();
            FIFO->pop_front();
            pthread_mutex_unlock(&mutex_FIFO);

            cout << num <<endl;
        }else{
            pthread_mutex_unlock(&mutex_FIFO);
        }
    }
}