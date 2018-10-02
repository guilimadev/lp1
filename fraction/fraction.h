#ifndef _FRACTION_H_
#define _FRACTION_H_
#include <iostream>
#include <stdexcept>

 
using real_type = int;



class Fraction
{
    private:
        real_type m_numerador;
        real_type m_denominador;
        float decimal_value;

    public:

        /// Basic constructor
        Fraction(real_type num, real_type deno){
            m_denominador = deno;
            m_numerador = num;

            decimal_value = ( (float)m_numerador / (float)m_denominador );

            if(deno == 0){
                throw std::invalid_argument (" Denominador igual a zero! "); 
            }
        }

        /// 
        Fraction(){
            m_numerador = 0;
            m_denominador = 1;
        }


        real_type get_Denominador( void );
        real_type get_Numerador( void );
        float get_decimalvalue( void );
        

        void set_Denominador (real_type);
        void set_Numerador (real_type);

        bool isProper( void );

        real_type makeProper( void );

        bool isZero( void );


        friend std::ostream & operator<< (std::ostream & os, const Fraction f){
            os << f.m_numerador << "/" << f.m_denominador;
            return os;
        }

    
};

#endif
