#pragma once
class Puntaje
{
private:
	int tiempoInicioJuego;
	int tiempoFinalJuego;

public:

	int getTiempoInicioJuego() { return tiempoInicioJuego; }
	void setTiempoInicioJuego(int _tiempoInicioJuego) { tiempoInicioJuego = _tiempoInicioJuego; }

	int getTiempoFinalJuego() { return tiempoFinalJuego; }
	void setTiempoFinalJuego(int _tiempoFinalJuego) { tiempoFinalJuego = _tiempoFinalJuego; }

	void CalculoDePuntaje();
	void MostrarPuntosEnPantalla();
};

