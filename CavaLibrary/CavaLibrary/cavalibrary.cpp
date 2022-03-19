#include "pch.h" 
#include <utility>
#include "cavalibrary.h"

CAVALIBRARY_API Human* create_human(int age, int gender, double height, double weight, double temperature)
{
    auto genderEnumType = Gender::female;
    if (gender == 1)
        genderEnumType = Gender::male;

    return new Human(age, genderEnumType, height, weight, temperature);
}

CAVALIBRARY_API void delete_human(Human* human)
{
    delete human;
}

CAVALIBRARY_API void cardiovascular_system(Human* human, double time, double oxygen)
{
    human->CardiovascularSystem(time, &oxygen);
}

CAVALIBRARY_API void die(Human* human)
{
    human->Die();
}

CAVALIBRARY_API void resuscitate(Human* human)
{
    human->Resuscitate();
}

CAVALIBRARY_API void artificial_coma(Human* human)
{
    human->ArtificialComa();
}

CAVALIBRARY_API int age(Human* human)
{
    return human->_characteristics.age;
}

CAVALIBRARY_API char* gender(Human* human)
{
    std::string gender;
    if (human->_characteristics.gender == Gender::female)
        gender = "female";
    else
        gender = "male";
    int len = gender.length() + 1;
    char* buff = (char*)CoTaskMemAlloc(len);
    strcpy_s(buff, len, gender.c_str());
    return buff;
}

CAVALIBRARY_API double height(Human* human)
{
    return human->_characteristics.height;
}

CAVALIBRARY_API double weight(Human* human)
{
    return human->_characteristics.weight;
}

CAVALIBRARY_API double temperature(Human* human)
{
    return human->_characteristics.temperature;
}