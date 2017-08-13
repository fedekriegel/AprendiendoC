#include <iostream>

using namespace std;

int main(){
	
int mayor, n1, n2, n3 ;
 
cout<<"introdusca 3 numeros: "<<endl; cin>>n1; cin>>n2; cin>>n3;

if (n1>=n2){
	if (n1 >= n3){
		mayor = n1;
	}
	else{ mayor = n3;
	}
}
else{ if (n2>n3){
	mayor = n2;
}
	else{ mayor = n3;
}
}

cout<<"el numero mas grande es: "<<mayor<<"\n";
	

	return 0;
}