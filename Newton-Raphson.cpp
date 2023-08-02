#include<bits/stdc++.h>
#define    f(a)    sin(a)-10*a+10
#define   g(a)   cos(a)-10
using namespace std;

int main()
{
	 float a0, a1, f0, f1, g0, e;
	 int step = 1, N;
	 a0= 1, e=0.0001;
     cout<< setprecision(6)<< fixed;

	 cout<<"Enter maximum iteration: ";
	 cin>>N;

	 cout<< endl;
	 do{
		  g0 = g(a0);
		  f0 = f(a0);
		  if(g0 == 0.0){
			   cout<<"Invalid.";
			   exit(0);
		  }
		  a1 = a0 - f0/g0;
		  cout<<"Iteration-"<< step<<":\t a = "<< setw(10)<< a1<<" and f(a) = "<< setw(10)<< f(a1)<< endl;
		  a0 = a1;
		  step = step+1;
		  if(step > N){
			   cout<<"Not Convergent.";
			   exit(0);
		  }
		  f1 = f(a1);
	 }
	 while(fabs(f1)>e);
	 cout<<"\nRoot is: "<< a1<< endl;
	 return 0;
}
