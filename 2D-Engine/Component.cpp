#include "Component.h"



Component::Component()
{
	type = Unknown;
	active = true;
}


Component::~Component()
{
}

void Component::OnEnable()
{
}

void Component::OnDisable()
{
}

void Component::SetActive(bool active)
{
	this->active = active;
	if (this->active) {
		OnEnable();
	}
	else {
		OnDisable();
	}
}

bool Component::IsActive() const
{
	return active;
}

GameObject * Component::GetGameObject() const
{
	return gameObject;
}

void Component::Save(Data & data) const
{
}

void Component::Load(Data & data)
{
}

