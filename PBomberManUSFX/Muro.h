#pragma once
class Muro
{
private:
	int altoMuro;
	int anchoMuro;
	int ubicacion;
public:

	int getAltoMuro() { return altoMuro; }
	void setAltoMuro(int _altoMuro) { altoMuro = _altoMuro; }

	int getAnchoMuro() { return anchoMuro; }
	void setAnchoMuro(int _anchoMuro) { anchoMuro = _anchoMuro; }

	int getUbicacion() { return ubicacion; }
	void setUbicacion(int _ubicacion) { ubicacion = _ubicacion; }

	void MostrarMuro();
	void Indestructible();
	void Barrera();
};

