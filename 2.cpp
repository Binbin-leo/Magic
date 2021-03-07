#include <stdio.h>
#include <math.h>


struct Student {
	int day;
	int month;
	int year;

}

typedef struct {
	int month;
	int day;
}Date;
struct Student student1,student2;
int max(int x, int y){
  int maxvalue;
  if(x >y) {
    maxvalue=x;
  } else {
    maxvalue=y;
  }

  return maxvalue;
}
int main()
{	
	char a[10]={};
	int x,a,b,c,d,y,h;
	scanf("%d, %d, %d, %d", &a, &b, &c, &d);

    if(a<b) {
	   
	}
	//d= max(a,b,c);
	printf("this is a c program h = %d\n", h);

    int a[10];

	int i,j,t;
	for(i=0;i<10;i++){
		scanf("%d", &a[i]);
	}
	for(j=0;j<9;j++){
		for(i=0;i<9-j;i++){
			if(a[i]>a[i+1]){
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}





	return 0;



}