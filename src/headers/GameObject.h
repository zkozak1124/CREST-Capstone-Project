#ifndef GAMEOBJECT
#define GAMEOBJECT 1

#include <SFML/Graphics.hpp>
#include "Physics2D.h"

namespace engine {

  class GameObject {
    public:

      sf::Sprite sprite;
      sf::Shape shape;
      sf::Text text;
      sf::VertexArray vertices;

      GameObject();
      virtual ~GameObject();
      void update();
      void fixedUpdate();
      void start();
      engine::Physics2D getPhysics();
      sf::Vector2f getPosition();
      void setPosition();
      float getRotation();
      float getRotationAsDeg();
      void setRotation(float angle);
      void setRotationAsDeg(float angle);
      void rotateAsDeg(float angle);
      void rotate(float);
      engine::Level* getLevel();
      void setLevel(Level* level);

    private:
      sf::Vector2f position;
      engine::Physics2D physics2D;
      engine::Level* curLevel;
      float rotation;
  };
}
#endif
