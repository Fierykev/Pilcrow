#pragma once

#include "pilcrow/modules/physics/Mathematics.h"

#include "SimpleReflection/Meta.hpp"


struct [[Meta::Reflectable("physics")]]  Body {
  float restitution;

  float massInverse;
  Mat3  inertiaTensor;

  Vec3 velocity;
  Vec3 angularVelocity;

  Vec3 impulse;
  Vec3 angularImpulse;

  void  SetMass(float m);
  float GetMass() const;
};

sreflDeclareExternalType(Body);