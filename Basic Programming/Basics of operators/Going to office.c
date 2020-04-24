#include <stdio.h>

int main(){
	long int D,Oc,Of,Od,Cs,Cb,Cm,Cd,OT,CT;
	scanf("%ld", &D);
	scanf("%ld %ld %ld", &Oc, &Of, &Od);
	scanf("%ld %ld %ld %ld", &Cs, &Cb, &Cm, &Cd);  
	OT=Oc+((D-Of)*Od);
	CT=Cb+((D/Cs)*Cm)+(D*Cd);
	if(OT<=CT){
		printf("Online Taxi");
	}
	else{
		printf("Classic Taxi");
	}
	return 0;       
}

//https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/going-to-office-e2ef3feb/