#include "mem.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

 int mem::memo(){
     ifstream fichier("/proc/meminfo");
     if(fichier){
         string MemTotal, MemFree, Buffers, Cached;
         getline(fichier, MemTotal);
         getline(fichier, MemFree);
         getline(fichier, Buffers);
         getline(fichier, Cached);
         cout << MemTotal << endl;
         cout << MemFree << endl;
         cout << Buffers << endl;
         cout << Cached <<endl;



         fichier.close();
     }

     else
         cerr << "Impossible d'ouvrir le fichier" << endl;
     return 0;
 }

mem::mem()
{

}
