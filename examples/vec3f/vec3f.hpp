#ifndef VEC3F_HPP
#define VEC3F_HPP


#include <iostream>
#include <array>


class vec3f
{
private:
  // Utilisation d'un std::array car la taille est fixe, connue à la compilation
  // et ne sera pas modifiée à l'exécution.
  std::array< float, 3 > v;

public:

  // Constructeur par défaut.
  //vec3f(): v( { 0.0f, 0.0f, 0.0f } ) {}
  
  // Le constructeur ci-dessous peut faire office de constructeur par défaut car
  // il contient des valeurs par défaut pour ses arguments.
  // On peut donc avoir 0, 1, 2 ou 3 arguments pour le constructeur.
  vec3f( float x = 0.0f, float y = 0.0f, float z = 0.0f ): v( { x, y, z } ) {}
  
  vec3f( std::array< float, 3 > const & a ): v( a ) {}
  
  // Destructeur: juste pour voir quand il est appelé.
  // Le destructeur par défaut suffit dans cet exemple.
  ~vec3f()
  {
    std::cout << "destructor\n";
  }

  // Cet opérateur est un getter car il retourne une copie de l'élément à la position i.
  // On ne peut donc pas modifier l'instance à partir de cet opérateur que l'on qualifie
  // donc const.
  float operator[]( std::size_t i ) const
  {
    return v[ i ];
  }

  // Cet opérateur est un setter qui permet de modifier l'instance, donc pas const !
  float & operator[]( std::size_t i )
  {
    return v[ i ];
  }

  // Retourne la longueur d'un vec3f, ne modifie pas l'instance donc const.
  // Déclaration en dehors de la classe dans le .cpp.
  float length() const;

  // Opérateur pour l'addition de vec3f, effectue this + v0 et retourne un nouveau vec3f.
  vec3f operator+( vec3f const & v0 )
  {
    return { v[0]+v0[0], v[1]+v0[1], v[2]+v0[2] };
  }
  
};

// Opérateur pour l'affichage d'une instance de vec3f.
// Déclaration dans le .cpp.
std::ostream & operator<<( std::ostream & out, vec3f const & v );


#endif
