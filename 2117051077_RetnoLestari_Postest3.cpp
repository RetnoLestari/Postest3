 #include <iostream>
 using namespace std;
 
 //Nama  : Retno Lestari
 //NPM   : 2117051077
 //Kelas : D
//Post Test 3 DDP

int main (){
	//variable
	int pil;
	float phi = 3.14;
	float r, t, keliling, volume;
	
	cout<<"Pilihan"<<endl;
	cout<<"==============================="<<endl;
	cout<<"1.Keliling Tabung"<<endl;
	cout<<"2.Volume Tabung"<<endl;
	cout<<"==============================="<<endl;
	cout<<"1 or 2 ? ";
	cin>>pil;
	
cout<<endl;
	
	if (pil==1){
		cout<<"Pilihan No 1 :"<<endl;
		cout<<"Masukkan Jari Jari tabung  = ";
		cin>>r;
		cout<<"Keliling alas tabung       = 2 * " <<phi<< " * " <<r<<endl;
		keliling=2*phi*r;
		
		cout<<"Keliling Tabung            = "<<keliling<<endl;
		
	}else if (pil==2){
		cout<<"Pilihan No 2"<<endl;
		cout<<"Masukkan Jari Jari Tabung  = ";
		cin>>r;
		cout<<"Masukkan Tinggi Tabung     = ";
		cin>>t;
		cout<<"Volume Tabung              = "<<phi<<  " * " <<r<< " * " <<r<< " * " <<t<<endl;
		volume = phi*r*r*t;
		
		cout<<"Volume Tabung adalah       = " <<volume<<endl;
		
	}else{
		cout<<"Syntax Error (-_-)"<<endl;
	}

	
	return 0;
	
}
