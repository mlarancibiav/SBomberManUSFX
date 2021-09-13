#pragma once

class Explosion {
private:
	int largoExplosion;
	int tiempoInicio;
	int tiempoFinal;

public:

	int getLargoExplosion() { return largoExplosion; }
	void setLargoExplosion(int _largoExplosion) { largoExplosion = _largoExplosion; }

	int getTiempoInicio() { return tiempoInicio; }
	void setTiempoInicio(int _tiempoInicio) { tiempoInicio = _tiempoInicio; }

	int getTiempoFinal() { return tiempoFinal; }
	void setTiempoFinal(int _tiempoFinal) { tiempoFinal = _tiempoFinal; }

	void RadioExplosion();
	void DestruyeMuroDestructible();
	void DestruyeBomber();
	void DestruyeEnemigo();
	void AbrirCamino();
};
