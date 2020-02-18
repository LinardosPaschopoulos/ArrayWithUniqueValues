#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define x 2 //must be greater than 0
#define y 2 //must be greater than 0
#define z 2 //must be greater than 0

int main(void)
{
	int MyArray[x][y][z],i,j,k,i_check,j_check,k_check,size;
	
	size=x*y*z;
	
	for(j=0;j<y;j++)
	{
	    for(i=0;i<x;i++)
	    {
			for(k=0;k<z;k++)
			{	
				MyArray[i][j][k]=rand()%size;
		       	for(j_check=0;j_check<y;j_check++)						
		        {
					for(k_check=0;k_check<z;k_check++)
					{
						for(i_check=0;i_check<x;i_check++)
				        {
				        	while(MyArray[i][j][k]==MyArray[i_check][j_check][k_check])
					        {	
					        	if(i_check>=i&&j_check>=j&&k_check>=k)
					        		break;
								MyArray[i][j][k]=rand()%size;
					        	i_check=0;
					        	j_check=0;
								k_check=0;
							}
						}
					}
				}	
			}
		}			
	}
	
	for(j=0;j<y;j++)
	    for(k=0;k<z;k++)
			{
		    for(i=0;i<x;i++)
		    printf("%8.1d   ",MyArray[i][j][k]);
		    printf("\n\n");
		    }
	
	system("pause");
	return 0;
}
