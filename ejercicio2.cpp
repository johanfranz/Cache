#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <ctime> 
 
unsigned t0, t1;
using namespace std;

vector<vector<int>> generarM(int n){
	vector<vector<int>> v2;
	for (int i = 0; i < n; ++i)
	{
		vector<int> v;
		for (int j = 0; j < n; ++j)
		{
			v.push_back(rand()%100);	
		}
		v2.push_back(v);
	}

	return v2;
}


void multiplicacion2(vector<vector<int>> a, vector<vector<int>> b){
	int n = a.size();
	cout<<n<<endl;
	vector<vector<int>> result;
	//result.reserve(n);

	for (int row = 0; row < n; ++row)
	{
		//result[row].reserve(n);
		for (int col = 0; col < n; ++col)
		{
			//cout<<a[0][4]<<endl;
			for (int inner = 0; inner < 2; inner++) {
                result[row][col] += a[row][inner] * b[inner][col];
                //result.push_back(result[row][col] + a[row][inner] * b[inner][col]);
            }
           	cout<<result[row][col]<<" ";
		}
	cout<<endl;
	}

}

void mostra(vector<vector<int>> A){
	int n=A.size();
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void multiplicacion1(vector<vector<int>> a, vector<vector<int>> b){
	//vector<vector<int>> producto;
	int n=a.size();
	int producto[n][n];
	
	for (int z = 0; z < n; z++) {
        // Dentro recorremos las filas de la primera (A)
        for (int i = 0; i < n; i++) {
            int suma = 0;
            // Y cada columna de la primera (A)
            for (int j = 0; j < n; j++) {
                // Multiplicamos y sumamos resultado
                suma += a[i][j] * b[j][z];
            }
            // Lo acomodamos dentro del producto
            producto[i][z] = suma;
        }
    }
    printf("Imprimiendo producto\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", producto[i][j]);
        }
        printf("\n");
    }
    //mostra(producto);

}

int main(int argc, char const *argv[])
{
	t0=clock();
	vector< vector<int> > a1 = generarM(30);
	vector< vector<int> > r = generarM(30);
	cout<<endl;
	cout<<endl;
	multiplicacion1(a1,r);
	t1 = clock();
	double time = (double(t1-t0)/CLOCKS_PER_SEC);
	



	t0=clock();
	vector< vector<int> > b = generarM(50);
	vector< vector<int> > c = generarM(50);
	cout<<endl;
	cout<<endl;
	multiplicacion1(b,c);
	t1 = clock();
	double time2 = (double(t1-t0)/CLOCKS_PER_SEC);


	t0=clock();
	vector< vector<int> > d = generarM(100);
	vector< vector<int> > e = generarM(100);
	cout<<endl;
	cout<<endl;
	multiplicacion1(d,e);
	t1 = clock();
	double time3 = (double(t1-t0)/CLOCKS_PER_SEC);

	t0=clock();
	vector< vector<int> > f = generarM(200);
	vector< vector<int> > g = generarM(200);
	cout<<endl;
	cout<<endl;
	multiplicacion1(f,g);
	t1 = clock();
	double time4 = (double(t1-t0)/CLOCKS_PER_SEC);

	t0=clock();
	vector< vector<int> > h = generarM(400);
	vector< vector<int> > i = generarM(400);
	cout<<endl;
	cout<<endl;
	multiplicacion1(h,i);
	t1 = clock();
	double time5 = (double(t1-t0)/CLOCKS_PER_SEC);

	cout << "30 Execution Time: " << time << endl;
	cout << "50 Execution Time: " << time2 << endl;
	cout << "100 Execution Time: " << time3 << endl;
	cout << "200 Execution Time: " << time4 << endl;
	cout << "400 Execution Time: " << time5 << endl;
	return 0;
}