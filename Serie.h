#include <cstdlib>
#include <iostream>
#include <new>
using namespace std;

class Serie
{
	private:
		int n,N,Ser,*u1;
	public:
		Serie(int Sr) {n=8,N=11,Ser=Sr,u1=new int [Sr];}
		void setn(int N);
		int CalcularSerieIterativa (int n1);
		int CalcularSerieRecursiva (int N);
};

int Serie::CalcularSerieIterativa(int n1){
	for (int i=1;i<=n1;i++){
	n=n-N;	
	cout<<n<<endl;
	}
}

int Serie::CalcularSerieRecursiva(int N)
{
if (N==1)
{
	return N=-3;
}
	else;
{
	return N=-11+CalcularSerieRecursiva (N-1);
}
}
