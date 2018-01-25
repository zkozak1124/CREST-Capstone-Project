#ifndef RECTANGLE_COLLIDER_2D
#define RECTANGLE_COLLIDER_2D  1
#include "Collider2D.hpp"
// Write Code here
namespace engine {
  class RectangleCollider2D : Collider2D {
    public:
      RectangleCollider2D();
      virtual ~RectangleCollider2D();

      bool intersects(RectangleCollider2D rectangleColl2D);


    private:

  };
}
#endif
