// --- Directions
// prints a star pattern
// 
// --- Examples
//
//    1
//   232
//  34543
// 4567654



#include<stdio.h>

int main()
{
	int k;
	for(int i=1; i<=4;i++){
		k=i;

		for(int j=1; j<=7; j++){
			if(j>=5-i && j<=3+i){
				printf("%d",k)	;
				j<4?k++:k--;
			}
			else{
				printf(" ");
			}
			
		}
		printf("\n");

}
}