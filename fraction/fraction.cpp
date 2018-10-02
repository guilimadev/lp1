#include "fraction.h"

real_type Fraction::get_Denominador( void ){
  return m_denominador;
}

real_type Fraction::get_Numerador( void ){
  return m_numerador;
}


float Fraction::get_decimalvalue( void ){
  return decimal_value;
}

void Fraction::set_Denominador( real_type x ){
  m_denominador = x;
}

void Fraction::set_Numerador( real_type y ){
  m_numerador = y;
}

bool Fraction::isProper( void ){
  if(m_numerador < m_denominador){
    return true;
    }
  else{
    return false;
  }
} 

 bool Fraction::isZero( void ){
            if(m_numerador == 0){
                return true;
            }
            else{
                return false;
            }
        }

real_type Fraction::makeProper( void ){
  real_type rest = m_numerador/m_denominador;

  m_numerador = m_numerador - rest;
  m_numerador = m_numerador/m_denominador;

  return rest;
}



  