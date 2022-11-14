#include <iostream>

int main() {
  // initialization
  std::string name{"Muhammad Tafif Qairawan Assiddiqi\n"};
  std::string major{"Informatika\n"};
  std::string university{"Universitas Tanjungpura\n"};
  std::string reason{"Karena saya ingin bertemu dengan sesama peminat developer dengan harapan mendapatkan ilmu dan relasi yang banyak dari komunitas ini\n"};

  // output
  std::cout << "Nama                    : " << name;
  std::cout << "Jurusan                 : " << major;
  std::cout << "Universitas             : " << university;
  std::cout << "Alasan ingin masuk GDSC : " << reason;

  getchar();

  return 0;  
}
