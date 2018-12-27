// Tristin Lehman
// Exersize 6.22(total sales)

#include<stdio.h>
#include<stdio.h>

int main()
{
	int i, j;
	int value;
	double sales[5][4] = {0.0};
	double dollar[5];
	
	puts("Enter the salesperson, product, and total sales.");
	puts("Enter -1 for the salesperson to end input.");
	unsigned int salesp;
	scanf("%u", &salesp);
	
	// continue to recieve input
	// while salesp is NOT -1
	
	while (salesp != -1)
	{
		unsigned int product; // current product
		double currentSales; 	// current sales
		scanf("%d%lf", &product, &currentSales);
		sales[product][salesp] = currentSales; //assign cell in table the specific dollar value of the sales of the product
		scanf("%u", &salesp);
	}
	
	//display table
	
	printf("%10d%12d%12d%12d%s\n", 0, 1, 2, 3, "		Total Sales");
	
	// display salesperson and sales
	for (i = 0; i <= 4; i++)
	{
		double totalSales; // initialize total sales variable
		printf("%u\n", i);
		double totalSalesRO;
		double totalSalesRT;
		double totalSalesRTr;
		double totalSalesRF;
		double totalSalesRFv;
		totalSalesRO += sales[0][j];
		totalSalesRT += sales[1][j];
		totalSalesRTr += sales[2][j];
		totalSalesRF += sales[3][j];
		totalSalesRFv += sales[4][j];
		for (j = 0; j <= 3; j++)
		{
			//display individual sales
			printf("%12.2f", sales[i][j]);
		}
	}
	
	for (int firstR = 0; firstR <= 0; firstR++)
	{
		int totalsaleRO;
		for (int allColmOne = 0; allColmOne <= 3; allColmOne++)
		{
			totalsaleRO += sales[firstR][allColmOne];
		}
		printf("%12.2f", totalsaleRO);
	}
	
	
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("Enter the salesperson number and the product number ")
//		}
//	}
}
