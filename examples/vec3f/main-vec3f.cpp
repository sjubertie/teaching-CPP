#include <iostream>
#include <vec3f.hpp>


int main()
{
  vec3f v0;
  vec3f v1( 2.0f );
  std::array< float, 3 > a0{ { 1.0f, 2.0f, 3.0f } };
  vec3f v2( a0 );
  vec3f v3 = v1; // constructeur de recopie implicite <=> vec3f v3( v1 )

  std::cout << v3 << std::endl;

  v3[ 2 ] = 5.0f;

  std::cout << v3 << std::endl;

  auto v4 = v3 + v2;

  std::cout << v3.length() << std::endl;
  std::cout << v4 << std::endl;
  
  return 0;
}
