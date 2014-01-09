#pragma once

#ifndef __EFFECT_H__
#define __EFFECT_H__

#include "glparameters.h"
#include "BuildClothModel.h"
#include "particles.h"
#include "ManModel.h"

extern const GLfloat TimeStep;
extern const GLfloat shiftRange;
extern const GLfloat TensionCoefficient;
extern int stepCount;

void initEnvironment(void);
void getForce(int);
void nextPosition(int);
void needStop(int);
void refreshPosition(void);
void sewClothModel(void);
void simulation(void);

#endif