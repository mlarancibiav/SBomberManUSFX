#pragma once
class Nivel
{
private:
	int puntuacion;

public:

	int getPuntuacion() { return puntuacion; }
	void setPuntuacion(int _puntuacion) { puntuacion = _puntuacion; }

	void GenerarNivel();
	void MostrarNivel();
};

