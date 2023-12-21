//
// Created by igorc on 29/11/2023.
//
#include "iostream"
#include "string"
using namespace std;

int main()
{
  string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

  string secret_message{};
  cout << "Enter your secret message: " << '\n';
  getline(cin, secret_message);

  string encrypted_message {};

  cout << "Encrypting message..." << '\n';

  for (char c:secret_message) {
    size_t position = alphabet.find(c);
    if(position != string::npos) {
      char new_character {key.at(position)};
      encrypted_message += new_character;
    } else {
      encrypted_message += c;
    }
  }

  cout << "\nEncrypted message: " << encrypted_message << '\n';

  string decrypted_message {};
  cout << "Decrypting message..." << '\n';

  for (char c: encrypted_message) {
    size_t position = key.find(c);
    if(position != string::npos) {
      char new_character {alphabet.at(position)};
      decrypted_message += new_character;
    } else {
      decrypted_message += c;
    }
  }
  cout << "Decrypted message: " << decrypted_message << '\n';
  cout << '\n';
  return 0;
}