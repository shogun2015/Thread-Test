#include <iostream>
#include "Global.h"
#include "Thread_Start.h"
#include "Thread_End.h"

#include <deque>

using namespace std;


int main(int argc, char const *argv[])
{
    pthread_t t_Start, t_End;
    deque<int> FIFO;

    pthread_create(&t_Start, NULL, thread_Start, &FIFO);
    pthread_create(&t_End, NULL, thread_End, &FIFO);
    cout << "hhh" << endl;



    pthread_join(t_Start, NULL);
    pthread_join(t_End, NULL);
}
