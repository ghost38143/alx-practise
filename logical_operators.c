#include <stdio.h>
int main()
{
	int m=15,n=45;
	int p=20,q=30;

	if(m<n && n!=0){
		printf("&& operator : the both conditions true\n");}
	if(!(m<n && n!=0)){
		printf("! operator : the both conditions are true\n");}
	if(q>p || p==q){
		printf("|| operator : one  conditios is true\n");}
        else{
		printf("! operatorare true But staus is inverted as false\n");
	}
}

