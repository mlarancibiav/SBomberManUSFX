#pragma once
class Tiempo
{
private:
	float tiempo;

public:

	int getTiempo() { return tiempo; }
	void setTiempo(int _tiempo) { tiempo = _tiempo; }

	void MostrarTiempoEnPantalla();
};

