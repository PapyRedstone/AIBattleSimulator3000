#include "ComponentManager.hpp"
#include "EntityManager.hpp"

int main(){
  ComponentManager c;
  EntityManager e;
  Position p{0,0};
  c.addComponent(e.getNextId(), std::make_shared<PositionableComponent>(PositionableComponent(p,false)));
  return 0;
}
