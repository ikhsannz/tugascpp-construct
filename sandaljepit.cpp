#include <iostream>
#include <string>
using namespace std;


//class dan variabel
class sandaljepit{
	public:
		void bahan (string dibuat);
		int ukuran;
		string warna;
};
int main(){
//varian sandaljepit
	sandaljepit nippon,swallow,ando;

//isi data nippon
	nippon.warna 	= "putih biru ";
	nippon.ukuran 	= 43 ;
//isi data swallow
	swallow.warna 	= "hijau merah ";
	swallow.ukuran 	= 42 ;
//isi data ando
	ando.warna 		= "kuning hitam ";
	ando.ukuran		= 45 ;

//cout nippon	
	cout << (nippon.warna);
	cout << (nippon.ukuran)<<" ";
	nippon.bahan("karet ");
//cout swallow
	cout << (swallow.warna);
	cout << (swallow.ukuran)<<" ";
	swallow.bahan("plastik ");
//cout ando
	cout << (ando.warna);
	cout << (ando.ukuran)<<" ";
	ando.bahan("kulit ");
}
//output void
void sandaljepit ::bahan(string dibuat){
	cout<<"bahannya "<<dibuat<<endl;
}
