#ifndef _CIRCLE_H_
#define _CIRCLE_H_
#include <iostream>


using real_type = int;

struct Point2D
{
   real_type x;
   real_type y;
};

class Circle
{
    private:
        real_type m_radius; //!< raio
        Point2D m_center; //!< centro do circulo.

    public:
        //=== Memebros especiais
        /// Construtor master
        Circle( real_type r=0,
                real_type x=0,
                real_type y=0 )
            : m_radius{ r }, m_center{ x, y }
        { /* empty */ }

        /// construtor copia
        Circle( const Circle & clone )
        {
            std::cout << "Dentro do const copia. \n";
            m_radius = clone.m_radius;
            m_center = clone.m_center;
            //m_center.x = clone.m_center.x;
            //m_center.y = clone.m_center.y;
        }


        ~Circle( void ){
          //  std::cout << "Destrutor chamado.\n";
        }

        // Assingment operator
        Circle& operator= (const Circle& rhs);
        

        

        //=== Accessors.
        real_type get_radius( void ) const;
        real_type get_x( void ) const;
        real_type get_y( void ) const;
        inline Point2D get_center( void ) const
        { return m_center; }

        real_type area (void ) const;

        //=== Modificadores

        /// Modify the radius of the circle to nr
        void set_radius(real_type nr);

        /// Modify the center of the circle to nc
        void set_center(const Point2D& nc);

        /// Modify the radius of the circle to x and y
        void set_center(real_type x, real_type y);



        //=== Sobrecarga de operadores
        
        bool operator==( const Circle& rhs )
        {
            return ( this->m_radius == rhs.m_radius and
                 this->m_center.x == rhs.m_center.x and
                 this->m_center.y == rhs.m_center.y ) ;
        }
        
        friend bool operator!=( const Circle &,  const Circle& );
};

#endif
