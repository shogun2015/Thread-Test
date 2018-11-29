#include "Thread_End.h"
#include "Global.h"
#include <iostream>
#include <deque>

using namespace std;

void *thread_End(void *arg)
{
    deque<int> *FIFO = (deque<int> *)arg;
    while(1){
        if (!FIFO->empty()){
            int num = FIFO->front();
            FIFO->pop_front();
            cout << num <<endl;
        }
    }
}