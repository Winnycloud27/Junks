#include <stdio.h>
#include <math.h>

int main(void)
{
    int num_of_robot, engine_power, resistance, weight, height, sum;
    int powerrobot;
    int totalpower_robot;

    printf("Enter the total number of robot to check: \n");
    scanf("%d", &num_of_robot);

    for (; num_of_robot != 0; num_of_robot--)
    {
        printf("Enter the engine power: ");
        scanf("%d", &engine_power);
        printf("Enter the resistance: ");
        scanf("%d", &resistance);
        printf("Enter the weight of the robot: ");
        scanf("%d", &weight);
        printf("Enter the height of the robot: ");
        scanf("%d", &height);
        powerrobot = (engine_power + resistance) * (weight - height);
        printf("The power of each robot is %d\n", powerrobot);

    }
    
    sum = powerrobot * num_of_robot;
    totalpower_robot = sum;
    printf("The total power of all the robot is %d\n", totalpower_robot);
}