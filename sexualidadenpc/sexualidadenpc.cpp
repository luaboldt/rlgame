#include "sexualidade.h"

SEXUALIDADE::SEXUALIDADE()
{
  genero.push_back("homem");
  genero.push_back("mulher");
  orientacao.push_back("heterossexual");
  orientacao.push_back("bissexual");
  orientacao.push_back("homossexual");
  orientacao.push_back("assexuado(a)");
}

std::string SEXUALIDADE::get_generoal()
{
  std::string retorno;
  int i = rand() % 20;
  if(i/2 == 0){
  retorno = genero[0];
  }else{
  retorno = genero[1];
  }
  return retorno;

}
std::string SEXUALIDADE::get_orientacaoal()
{
  std::string retorno;
  int i = rand() % 10;
  if(i == 0)
  {
    retorno = orientacao[3];
  }
  if((i == 1) || (i ==6) || (i == 8) )
  {
    retorno = orientacao[1];
  }
  if((i == 2) || (i == 5) || (i == 7))
  {
    retorno = orientacao[2];
  }
  if((i == 3) || (i == 4) || (i == 9) )
  {
    retorno = orientacao[0];
  }
  return retorno;
}
