#include <stdio.h>

void task(int n)
{
    printf("This is the task %d\n", n);

}


int main()
{
    par {
	task(0);
	task(0);
    }

    return 0;

}
