#pragma once
class Bomba
{
private:
	int tamaño;
	float tiempoDeDetonacion;
	float fuerzaDeExplosion;

public:

	int getTamaño() { return tamaño; }
	void setTamaño(int _tamaño) { tamaño = _tamaño; }

	int getTiempoDeDetonacion() { return tiempoDeDetonacion; }
	void setTiempoDeDetonacion(int _tiempoDeDetonacion) { tiempoDeDetonacion = _tiempoDeDetonacion; }

	int getFuerzaDeExplosion() { return fuerzaDeExplosion; }
	void seFuerzaDeExplosion(int _fuerzaDeExplosion) { fuerzaDeExplosion = _fuerzaDeExplosion; }

	void MostrarBomba();
	void Explotar();

};

