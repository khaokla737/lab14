#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}
void showMatrix(const bool B[][N]){
    for(int a=0;a<N;a++){
        for(int b=0;b<N;b++){
            cout<<B[a][b]<<" ";
        }
        cout<<endl;
    }
    
}
void inputMatrix(double A[][N]){
    for(int c=0;c<N;c++){
        cout<<"Row "<<c+1<<": ";    
        for(int d=0;d<N;d++){
            cin>>A[c][d];
        }
    }
    
}
void findLocalMax(const double A[][N], bool B[][N]){
    for(int e=0;e<N;e++){
        for(int f=0;f<N;f++){
            B[e][f]=false;
		}	

	}
	for(int g=1;g<N-1;g++){
        for(int h=1;h<N-1;h++){
            if(A[g][h]>=A[g-1][h]&&
               A[g][h]>=A[g+1][h]&&
               A[g][h]>=A[g][h-1]&&
               A[g][h]>=A[g][h+1]){
				B[g][h]=true;
			}
		}	

	}
	
}
//Do not modify source code above this line 