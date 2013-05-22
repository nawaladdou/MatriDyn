// Tablo2dimDyn.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"

#include <iostream>
 
using namespace std;
	
 
int **t;
int nColonnes;
int nLignes;
 
void Free_Tab();  // Libérer l'espace mémoire;
 
int main(){
 
  cout << "Nombre de colonnes : ";  cin >> nColonnes;
  cout << "Nombre de lignes : ";  cin >> nLignes;
 
  /* Allocation dynamique */
  t = new int* [ nLignes ];
  for (int i=0; i < nLignes; i++)
    t[i] = new int[ nColonnes ];
 
  /* Initialisation */
  for (int i=0; i < nLignes; i++)
    for (int j=0; j < nColonnes; j++)
      t[i][j] = i*j;
 
  /* Affichage */
  for (int i=0; i < nLignes; i++) {
 
    for (int j=0; j < nColonnes; j++)
      cout << t[i][j] << " ";
    cout << endl;
  }
 
  Free_Tab();
 
  return 0;
}
 
void Free_Tab(){
 
  for (int i=0; i < nLignes; i++)
    delete[] t[i];
  delete[] t;
}
