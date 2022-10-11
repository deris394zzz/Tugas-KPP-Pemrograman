// NAMA       : Hosea Derius Widigda
// NRP        : 5022221033
// Jurusan    : Tekik Elektro

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

int mencari_V0(float Vtan, int V0)
{
    if(Vtan>0&&Vtan<11)
    {
        V0=Vtan-1;
    } else if(Vtan<21&&Vtan>10)
    {
        V0=Vtan-3;
    } else if (Vtan<31&&Vtan>20)
    {
        V0=Vtan-5;
    }else
      return 0;
}

int speed_dgn_loss(int x,int V0)
{
    /* tulis fungsi hitung_loss kalian disini */
    x=V0*V0*sin(2*SUDUT)/GRAVITASI;

    return 0;
}

int main() {
    /* tulis kode utama kalian disini */
    int x,V0;
    float Vtan;
      /* input adalah kecepatan tangensial maksimum roller */
      /* std::cin >> input */
      std::cin >> Vtan;
          if(Vtan>0&&Vtan<11)
    {
        V0=Vtan-1;
    } else if(Vtan<21&&Vtan>10)
    {
        V0=Vtan-3;
    } else if (Vtan<31&&Vtan>20)
    {
        V0=Vtan-5;}
    x=V0*V0*sin(2*SUDUT)/GRAVITASI;

    return 0;

      /* std::cout << jarak << " " << kecepatan tangensial << std::endl */
      std::cout << x << " " << Vtan << std::endl;
    return 0;
}
