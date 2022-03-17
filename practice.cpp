// recursive function to find total ways to reach a certain point in a  2 d matrix

#include<bits/stdc++.h>
using namespace std;
//	base_condtion
//	result_increment
//	problem_reduction
int recurse(int i,int j,int rows,int cols){
	if(i==rows-1 && j==cols-1)
		return 1;
	if(i>=rows || j>=cols)
		return 0;
	return recurse(i+1,j,rows,cols)+recurse(i,j+1,rows,cols);
}
int main(){
	int rows,cols;
	cin>>rows>>cols;
	int i=0,j=0;
	cout<<recurse(i,j,rows,cols)<<endl;

	
}
