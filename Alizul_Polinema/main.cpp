#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string, string> hash;
    hash["Alasan ingin masuk GDSC"] = "GDSC merupakan sebuah program yang menarik bagi saya untuk mengembangkan skills dalam bidang pemrograman, tentunya di bidang yang saya sukai yaitu pemrograman web. Namun di sisi lain, GDSC dapat memperluas relasi dengan orang-orang yang memiliki minat yang sama.";
    hash["Universitas"] = "Politeknik Negeri Malang";
    hash["Jurusan"] = "Teknik Informatika";
    hash["Nama"] = "Muhammad Ali Zulfikar";

    for (auto it = hash.begin(); it != hash.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }
}