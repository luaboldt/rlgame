#ifndef SEXUALIDADE_H
#define SEXUALIDADE_H

#include <iostream>
#include <time.h>
#include <vector>
#include <string>
#include <stdlib.h>

class SEXUALIDADE
{
private:
  std::vector<std::string> genero;
  std::vector<std::string> orientacao;

public:
  SEXUALIDADE();
  std::string get_generoal();
  std::string get_orientacaoal();
};

#endif
