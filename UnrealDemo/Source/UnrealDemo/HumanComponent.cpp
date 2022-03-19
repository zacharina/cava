#include "HumanComponent.h"

void UHumanComponent::InitHuman(int* human)
{
    human_ptr = human;
}

void UHumanComponent::DeleteHuman()
{
    if (!human_ptr) return;
    delete human_ptr;
}