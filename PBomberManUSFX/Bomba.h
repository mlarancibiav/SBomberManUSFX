#pragma once
class Bomba
{
private:
	int tama�o;
	float tiempoDeDetonacion;
	float fuerzaDeExplosion;

public:

	int getTama�o() { return tama�o; }
	void setTama�o(int _tama�o) { tama�o = _tama�o; }

	int getTiempoDeDetonacion() { return tiempoDeDetonacion; }
	void setTiempoDeDetonacion(int _tiempoDeDetonacion) { tiempoDeDetonacion = _tiempoDeDetonacion; }

	int getFuerzaDeExplosion() { return fuerzaDeExplosion; }
	void seFuerzaDeExplosion(int _fuerzaDeExplosion) { fuerzaDeExplosion = _fuerzaDeExplosion; }

	void MostrarBomba();
	void Explotar();

};

