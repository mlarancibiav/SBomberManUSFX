#pragma once
class Vida
{
private:
	int inicioJuego;
	int finJuego;
	int nuevo;

public:

	int getInicioJuego() { return inicioJuego; }
	void setInicioJuego(int _inicioJuego) { inicioJuego = _inicioJuego; }

	int getFinJuego() { return finJuego; }
	void setFincioJuego(int _finJuego) { finJuego = _finJuego; }

	void MostrarVidas();
};

