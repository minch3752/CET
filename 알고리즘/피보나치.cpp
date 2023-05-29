#include<iostream>

int a=0, b=0;

int fibonacci(int n) {
    if (n == 0) {
        a+=1;
        return 0;
    } else if (n == 1) {
        b+=1;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
    
}

int main(){
	int n, m;
	
	scanf("%d",&n);
	
	for(int i=0; i<n; i++){
		a=0;
		b=0;
		std::cin >> m;
		fibonacci(m);
		printf("%d %d\n",a,b);
	}
	
	
	return 0;
}
