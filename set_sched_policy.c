#include <sys/syscall.h>
#include <unistd.h>
#include <stdio.h>

#define __NR_set_sched_policy        337

int set_sched_policy(int i)
{
    return (int) syscall(__NR_set_sched_policy, i);
};

main ()
{
    int choice;
    printf("Please choose a scheduling policy\n\n");
    printf("1. First Come First Served (FCFS)\n");
    printf("2. Round Robin (RR)\n");
    printf("3. Lottery\n");
    printf("4. CFS\n");
    printf("\n");
    printf("Please enter choice: ");
    scanf("%i", &choice);
    set_sched_policy(choice);

    if (choice == 1)
    {
        printf("\nFIFO scheduling selected\n\n");
    }
    if (choice == 2)
    {
        printf("\nRR scheduling selected\n\n");
    }
    if (choice == 3)
    {
        printf("\nLottery scheduling selected\n\n");
    }
    if (choice == 4)
    {
        printf("\nCFS selected\n\n");
    }
}
