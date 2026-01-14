#include<iostream>
#include<string>                //for string inputs into variables
#include<stdio.h>               //for gets()
using namespace std;
string encrypt(string plaintext, int key)
{
    string plaintxt;
    int enc_key;
    int i;
    int pn;                         //no. of plaintext, numtext and enctext characters

    cout<<"\nEnter text to be encrypted.\n";
    cin>>plaintxt;                 //taking plaintext input
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
    return enc_txt;
}

string decrypt(string enc_text, int key)
{
    string enc_txt;
    int enc_key;
    int i;
    int pn;                         //no. of plaintext, numtext and enctext characters

    cout<<"\nEnter text to be decrypted.\n";
    cin>>enc_txt;                 //taking plaintext input
    cout<<"\nEnter encryption key.\n";
    cin>>enc_key;

    pn = enc_txt.length();                 //getting the number of characters in plaintext
    int numtxt[pn];                         //making an array with plaintxt character length
    for (i=0; i < pn; i++) 
    {      
        numtxt[i] = (unsigned char)enc_txt[i];     //converting plaintxt characters into numbers
    }
    int numtxt2[pn];                        //making array to work store raw ciphertext 
    for (i=0;i<pn;i++)
    {
        numtxt2[i] = numtxt[i] - enc_key;       //adding enc_key to each character in numtxt to create raw ciphertxt
    }
    char plaintxt[pn];                       //array to store the ciphertxt
    for (int i = 0; i < pn; i++) 
    {
        plaintxt[i] = char(numtxt2[i]);         //converting numbers into characters and storing into enc_txt
    }
    cout<<"\nHere is the encrypted text:\n";
    for(i=0;i<pn;i++)
    {
        cout<<plaintxt[i];
    }
    return plaintxt;
}

int main()
{
    string str_input;
    int key;
    cout<<"Welcome to the Caesar Cipher. v1.0";
    bool running;
    while(running=true)
    {
        cout<<"Choose encryption or decryption. Choose q to quit. (e/d/q)";
        char choice;
        cin>>choice;
        switch(choice)
        {
            case 'e':
            {
                encrypt(str_input, key);
                break;
            }

            case 'd':
            {
                decrypt(str_input, key);
                break;
            }

            case 'q':
            {
                return 0;
            }
        }
    }
    return 0;
}