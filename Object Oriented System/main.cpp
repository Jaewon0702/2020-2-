//������ ����ϱ�
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int dan, i;
	/*cout <<"����� ���ϴ� ����?";
	cin>>dan;
	for(i=1;i<=9;i++)
		cout<<dan<<"*"<<i<<"="<<dan*i<<"\n";*/
	for(dan=1;dan<=9;dan++){
		for(i=1;i<=9;i++)
			cout<<dan<<"*"<<i<<"="<<setw(2)<<dan*i<<"\t";
		cout<<"\n";

	}


}