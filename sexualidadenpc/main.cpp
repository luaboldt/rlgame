#include <iostream>
#include "sexualidade.h"

int main()
{
  srand(time(NULL));
  SEXUALIDADE sexualidade;
  std::cout << sexualidade.get_generoal() << std::endl;
  std::cout << sexualidade.get_orientacaoal() << std::endl;

  return 0;
}
