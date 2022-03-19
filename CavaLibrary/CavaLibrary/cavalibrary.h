#pragma once

#include <iostream>
#include <sstream>
#include <combaseapi.h>
#include "human.h"
#include "trachea.h"
#include "lung.h"
#include "heart.h"
#include "ventricle.h"
#include "atrium.h"
#include "bloodvessel.h"
#include "tissue.h"

#ifdef CAVALIBRARY_EXPORTS
#define CAVALIBRARY_API __declspec(dllexport)
#else
#define CAVALIBRARY_API __declspec(dllimport)
#endif

//Object Handling
extern "C" CAVALIBRARY_API Human * create_human(int age, int gender, double height, double weight, double temperature);
extern "C" CAVALIBRARY_API void delete_human(Human * human);

//Cardiovascular System
extern "C" CAVALIBRARY_API void cardiovascular_system(Human * human, double time, double oxygen);
extern "C" CAVALIBRARY_API void die(Human * human);
extern "C" CAVALIBRARY_API void resuscitate(Human * human);
extern "C" CAVALIBRARY_API void artificial_coma(Human * human);

//Information
extern "C" CAVALIBRARY_API int age(Human * human);
extern "C" CAVALIBRARY_API char* gender(Human * human);
extern "C" CAVALIBRARY_API double height(Human * human);
extern "C" CAVALIBRARY_API double weight(Human * human);
extern "C" CAVALIBRARY_API double temperature(Human * human);
