#include<iostream>
#include<string>                //for string inputs into variables
#include<stdio.h>               //for gets()
using namespace std;
int main()
{
    string plaintxt;
    int enc_key;
    int i, j, k, l;
    int pn, nn, en;                         //no. of plaintext, numtext and enctext characters

    cout<<"\nEnter text to be encrypted.\n";
    getline(cin, plaintxt);                 //taking plaintext input
    cout<<"\nEnter encryption key.\n";
    cin>>enc_key;

    pn = plaintxt.length();                 //getting the number of characters in plaintext
    int numtxt[pn];                         //making an array with plaintxt character length
    for (i=0; i < pn; i++) 
    {      
        numtxt[i] = (unsigned char)plaintxt[i];     //converting plaintxt characters into numbers
    }
    int numtxt2[pn];                        //making array to work store raw ciphertext 
    for (i=0;i<pn;i++)
    {
        numtxt2[i] = numtxt[i] + enc_key;       //adding enc_key to each character in numtxt to create raw ciphertxt
    }
    char enc_txt[pn];                       //array to store the ciphertxt
    for (int i = 0; i < pn; i++) 
    {
        enc_txt[i] = char(numtxt2[i]);         //converting numbers into characters and storing into enc_txt
    }
    cout<<"\nHere is the encrypted text:\n";
    for(i=0;i<pn;i++)
    {
        cout<<enc_txt[i];
    }
    return 0;
}