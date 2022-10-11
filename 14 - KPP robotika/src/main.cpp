// cara run task buat save, compile, dan run rogram press [ctlr + shift + B]

// NAMA		:muhammad fathi farhat
// NRP		:5024211065
// Jurusan	:teknik komputer

#include <iostream>
#include <cmath>

using namespace std;
#define GRAVITASI 10       // 10 m/s^2
#define START_PENGUKURAN 1 // pengukuran dimulai dari 1 meter
#define SUDUT 45           // sudut elevasi tembakan

int speed_dgn_loss(int Vtang)
{
    /* tulis fungsi hitung_loss kalian disini */
    int reslut = Vtang;
    if (1 <= Vtang && Vtang <= 10)
        reslut -= 1;
    if (11 <= Vtang && Vtang <= 20)
        reslut -= 3;
    if (21 <= Vtang && Vtang <= 30)
        reslut -= 5;
    return reslut;
}

int Xmax(int Vnol)
{
    int result;
    float degree = (2 * 45) * 3.14 / 180;

    result = (Vnol * Vnol * sin(degree)) / GRAVITASI;
    return result;
}

int main()
{
    int jarak;
    int Vtang;
    /* tulis kode utama kalian disini */

    /* input adalah kecepatan tangensial maksimum roller */
    std::cin >> Vtang;
    Vtang = speed_dgn_loss(Vtang);
    jarak = Xmax(Vtang);
    cout << jarak << "" << Vtang << endl;
    /* std::cout << jarak << " " << kecepatan tangensial << std::endl */
    return 0;
}