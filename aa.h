#ifndef AA_H_
#define AA_H_

#include <iostream>
#include <Windows.h>

class AA
{
public:

  static void rolling(void) {

    // 
    while(true){

      std::cout << "(ίΝί)\r";
      Sleep(100);
      std::cout << "( ίΝ)\r";
      Sleep(100);
      std::cout << "( @ί)\r";
      Sleep(100);
      std::cout << "(@@)\r";
      Sleep(100);
      std::cout << "(ί@ )\r";
      Sleep(100);
      std::cout << "(Νί )\r";
      Sleep(100);

    }

  }

};

#endif // AA_H_