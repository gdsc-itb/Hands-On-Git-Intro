#include <iostream>
using namespace std;


struct Biodata{
      string nama,jurusan,univ,alasanGw;
};


      

int main(){
      Biodata x;

      cout<<"Nama\t\t\t: "; getline(cin,x.nama); cout<<"\n";
      cout<<"Jurusan\t\t\t: "; getline(cin,x.jurusan); cout<<"\n";
      cout<<"Universitas\t\t: "; getline(cin,x.univ); cout<<"\n";
      cout<<"Alasan ingin GDSC\t: "; getline(cin,x.alasanGw); cout<<"\n";

      cout<<"\n =============================================================\n";
    
      cout<<"Nama\t\t\t: "<<x.nama<<"\n";
      cout<<"Jurusan\t\t\t: "<<x.jurusan<<"\n";
      cout<<"Universitas\t\t: "<<x.univ<<"\n";
      cout<<"Alasan ingin GDSC\t: "<<x.alasanGw<<"\n";

      /*Outuput : 
                  Nama                    : Martin Ompusunggu
                  Jurusan                 : Teknik Informatika
                  Universitas             : Itera
                  Alasan ingin GDSC       : Ingin menambah wawasan dan ingin eksplor diri
      */


}