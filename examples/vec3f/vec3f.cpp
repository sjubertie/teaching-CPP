#include <vec3f.hpp>
#include <cmath>


float vec3f::length() const
{
  return std::sqrt( v[ 0 ] * v[ 0 ] + v[ 1 ] * v[ 1 ] + v[ 2 ] * v[ 2 ] );
}

std::ostream & operator<<( std::ostream & out, vec3f const & v )
{
  out << "[" << v[ 0 ] << ", " << v[ 1 ] << ", " << v[ 2 ] << "]";
  return out;
}
