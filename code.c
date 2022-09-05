#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d", &t);
	
	int x,y;
	
	while(t--){
	    scanf("%d%d", &x,&y);
	    if(x>y || x==y){
	        printf("%d \n", x);
	    }
	    else if(y>x || y==x){
	        printf("%d \n", y);
	    }
	}
	return 0;
}

