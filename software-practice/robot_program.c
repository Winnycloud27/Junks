#include <stdio.h>
#include <math.h>

int main(void)
{
	int num_of_robot, engine_power, resistance, weight, height;
	int powerrobot, totalpower_robot = 0;

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
		printf("The current value of the robot power is %d\n", powerrobot);
		totalpower_robot = totalpower_robot + powerrobot;
	}

	printf("The total power of all the robot is %d\n", totalpower_robot);
	return (0);
}
