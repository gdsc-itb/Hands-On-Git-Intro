#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef string str;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<pi> vpi;
typedef vector<pll> vpll;

#define forn(n) for(int i = 0; i < n; i++)
#define forx(a, b) for(int i = a; i < b; i++)
#define scanx(x, n) vi x(n); for(int i = 0; i < n; i++) cin >> x[i]; 
#define all(x) x.begin(), x.end()


int main()
{   
    str nama = "Juan Sohuturon Arauna Siagian";
    str jurusan = "STEI - Komputasi";
    str universitas = "Institut Teknologi Bandung";
    str alasan = "Ingin mengembangkan potensi di bidang pemrograman dan teknologi secara umum serta melatih kemampuan untuk meneyelesaikan masalah dengan memanfaatkan kemajuan teknologi. Tidak lupa untuk mencari relasi dan juga koneksi dengan teman teman yang memiliki minat di bidang yang sama";
    cout << "Nama : " << nama << endl;
    cout << "Jurusan : " << jurusan << endl;
    cout << "Universitas : " << universitas << endl;
    cout << "Alasan ingin masuk GDSC : " << alasan << endl;
}

