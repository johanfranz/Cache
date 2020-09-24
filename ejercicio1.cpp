#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


const int MAX = 4;
void mostrar(double A[MAX][MAX]){
	for (int i = 0; i < MAX; ++i){
		for (int j = 0; j < MAX; ++j){
			cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void FirstLoop(){

	double A[MAX][MAX], x[MAX], y[MAX];
	/* Initialize A and x, assign y = 0 */
/* First pair of loops */
//	A[MAX][MAX]={{1.,2.,3.,4.},{5.,6.,7.,8.},{9.,10.,11.,12.},{13.,14.,15,16}};
	//llenar(A);
	for (int i = 0; i < MAX; i++){
		for (int j = 0; j < MAX; j++){
			y[i] += A[i][j]*x[j];
		}
	}

}

void SecondLoop(){
	int MAx = 4;
	double A[MAX][MAX], x[MAX], y[MAX];
	/* Assign y = 0 */
	/* Second pair of loops */
	for (int j = 0; j < MAX; j++){
		for (int i = 0; i < MAX; i++){		
			y[i] += A[i][j]*x[j];
		}
	}
}

int main(int argc, char const *argv[])
{

	FirstLoop();
	cout<<endl;
	SecondLoop();
	return 0;
}