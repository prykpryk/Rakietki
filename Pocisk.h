#pragma once

#include "Statek.h"

class Pocisk : public Statek
{
private:
protected:


public:
	Pocisk(Statek::Rodzaj rodzaj, std::vector<shared_ptr<Statek>> * tablicaStatków, shared_ptr<Statek> rodzic, float vel_wylotowa);

	virtual void obliczSiły() override;

	void dodajSiłęSilnika();

	virtual void zmieńStrona(Strona strona) override;

	virtual void onCollision(Statek & drugi) override;
};