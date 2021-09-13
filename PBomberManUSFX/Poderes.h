#pragma once
class Poderes
{
private:
	int puntuacion;
	int nivel;
public:

	int getPuntuacion() { return puntuacion; }
	void setPuntuacion(int _puntuacion) { puntuacion = _puntuacion; }

	int getNivel() { return nivel; }
	void setNivel(int _nivel) { nivel = _nivel; }

	void AumentarVelocidad();
	void Invencibilidad();
	void TiempoDeDuracion();
	void PotenciaBomba();
};

