#include <iostream>

using namespace std;
int adim_sayisi = 0;

// Diskleri taþýyan fonksiyon
void moveTower(int discs, char start, char end, char temp)
{
	
    if (discs == 1) {//Eðer disk sayisi 1 ise bu diski baþlangýç sutunundan hedef sutuna tasir
        cout << "Move top disk from peg  " << start << " to peg " << end << endl;
        return;
    }
    // Hanoi Kuleleri algoritmasý
    moveTower(discs-1, start,temp,end);//Ýlk olarak en büyük disk haric tum diskler gecici sutuna tasinir 
    cout << "Move top disk from peg  " << start << " to peg " << end << endl;//En büyük disk baslangic sutunundan hedef sutununa tasinir
  
    moveTower(discs-1, temp,end,start);//Gecici sutunda bulunan tum diskler hedef sutuna tasinir
    
   
}

int main()
{
	int discs = 8;//Tasinacak toplam disk sayisi
	moveTower(discs,'A','C','B');
    return 0;
}

