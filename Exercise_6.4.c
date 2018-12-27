// Tristin Lehman
// Exercise 6.4

#include<stdio.h>
#include<math.h>

int main()
{
	int t [2][5];
	t[0][1] = 0;
	
	t[0][0] = 0;
	t[0][1] = 0;
	t[0][2] = 0;
	t[0][3] = 0;
	t[0][4] = 0;
	t[1][0] = 0;
	t[1][1] = 0;
	t[1][2] = 0;
	t[1][3] = 0;
	t[1][4] = 0;
	
	int i, j;
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 5; j++)
		{
			t[i][j] = 0;
			printf("t[%d][%d] = %d\n", i, j, t[i][j]);
		}
	}
	
	printf("Enter the value for the first element: \n");
	scanf("%d", &t[0][0]);
	printf("Enter the value for the second element: \n");
	scanf("%d", &t[0][1]);	
	printf("Enter the value for the third element: \n");
	scanf("%d", &t[0][2]);	
	printf("Enter the value for the fourth element: \n");
	scanf("%d", &t[0][3]);
	printf("Enter the value for the fifth element: \n");
	scanf("%d", &t[0][4]);
	printf("Enter the value for the sixth element: \n");
	scanf("%d", &t[1][0]);
	printf("Enter the value for the seventh element: \n");
	scanf("%d", &t[1][1]);
	printf("Enter the value for the eigth element: \n");
	scanf("%d", &t[1][2]);
	printf("Enter the value for the ninth element: \n");
	scanf("%d", &t[1][3]);
	printf("Enter the value for the tenth element: \n");
	scanf("%d", &t[1][4]);
	
	
	
	int l, m, smallest;
	
	smallest = t[0][0];
	
	for (l = 0; l < 2; l++)
	{
		for (m = 0; m < 5; m++)
		{
			if (t[l][m] < smallest)
			{
				smallest = t[l][m];
			}
		}
	}
	printf("\nThe smallest element is: %d\n", smallest);
	printf("%d, %d, %d, %d, %d", t[0][0], t[0][1], t[0][2], t[0][3], t[0][4]);
	
	int total = t[0][3] + t[1][3];
	printf("\n%d	%d		%d		%d		%d\n%d	%d		%d		%d		%d", t[0][0], t[0][1], t[0][2], t[0][3], t[0][4], t[1][0], t[1][1], t[1][2], t[1][3], t[1][4]);						
	return;
}
