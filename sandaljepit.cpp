#include <iostream>
#include <string>
using namespace std;


class sandaljepit{
	public:
		void bahan (string dibuat);
		int ukuran;
		string warna;
};
int main(){
	sandaljepit nippon,swallow,ando;
	
	nippon.warna 	= "putih biru ";
	nippon.ukuran 	= 43 ;
	swallow.warna 	= "hijau merah ";
	swallow.ukuran 	= 42 ;
	ando.warna 		= "kuning hitam ";
	ando.ukuran		= 45 ;
	
	cout << (nippon.warna);
	cout << (nippon.ukuran)<<" ";
	cout << (swallow.warna);
	cout << (swallow.ukuran)<<" ";
	cout << (ando.warna);
	cout << (ando.ukuran)<<" ";
}
void sandaljepit ::bahan(string dibuat){
	cout<<"bahannya "<<dibuat<<endl;
}
