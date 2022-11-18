identitas = [["Nama : ","Jurusan : ","Universitas : ","Alasan ingin masuk GDSC : "],["" for i in range(4)]]
identitas[1][0] = "Justin Aditya Putra Prabakti"
identitas[1][1] = "STEI-K"
identitas[1][2] = "ITB"
identitas[1][3] = "Kalau aku harus jujur, karena ada kata-kata google nya."

print("\n"*5)

for i in range(4):
    for j in range(2):
        print(identitas[j][i],end="")
    print()

print("\n"*5)