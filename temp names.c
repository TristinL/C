#include <stdio.h>
#include<string.h>

int main() 
{
  char* names[100][150]= { {"Angie","561-795-0897 "}, {"Sue","954-780-7809"}, {"Tammi","561-301-7985 "}, {"Matt","561-676-7896"}, {"Jack","545-456-7894"}, {"Tristen","561-989-7849"},{"Beth","954-656-7842"}, {"Cathy","561-853-3409"}, {"Devin","561-565-4578"}, {"Perry","561-954-0987"} };


 // char* numbers [150] = {"561-795-0897","954-780-7809","561-301-7985","561-676-7896", "545-456-7894", "561-989-7849","954-656-7842","561-853-3409", "561-565-4578","561-954-0987"};
  
 
 for(int i=0; i<10; i++)
{
  for(int j=0; j<1; j++){
    //puts("got here as welll");
    printf("%s\n", names[i][j]);
  }
  //printf("%s\n", names[i][i]);
  //if()
/*    for (int j = 0; j < 1; j++){
    //names[j][0]= "22";
    printf("%s\n", names[i]);
  }*/
 // names[i][1] = "";
  //printf("\n%s", names[0][i]);

//scanf("%s", input );
}
  return 0;
}

/*char * names[10][1]= {"Angie", "Sue", "Tammi", "Matt", "Jack", "Tristen", "Beth","Cathy","Devin", "Perry"};
for(i=0; i<10; i++)
{
  printf("\n%s", names[i][0] );
*/

