#include "Thread_Start.h"
#include "Global.h"
#include <iostream>
#include <deque>

using namespace std;

void *thread_Start(void *arg)
{
    deque<int> *FIFO = (deque<int> *)arg;
    FIFO->push_back(22333);
}