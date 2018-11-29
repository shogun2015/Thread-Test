#include <iostream>
#include <deque>

#include "Thread_Start.h"
#include "Global.h"

using namespace std;

void *thread_Start(void *arg)
{
    deque<int> *FIFO = (deque<int> *)arg;
    pthread_mutex_lock(&mutex_FIFO);
    FIFO->push_back(22333);
    pthread_mutex_unlock(&mutex_FIFO);
}