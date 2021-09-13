#pragma once
class BotonesDeDireccion
{
private:
	int direccionArriba;
	int direccionAbajo;
	int direccionIzquierda;
	int direccionDerecha;

public:
	int getDireccionArriba() { return direccionArriba;  }
	void setDireccionArriba(int _direccionArriba) { direccionArriba = _direccionArriba; }

	int getDireccionAbajo() { return direccionAbajo; }
	void setDireccionAbajo(int _direccionAbajo) { direccionAbajo = _direccionAbajo; }

	int getDireccionIzquierda() { return direccionIzquierda; }
	void setDireccionIzquierda(int _direccionIzquierda) { direccionIzquierda = _direccionIzquierda; }

	int getDireccionDerecha() { return direccionDerecha; }
	void setDireccionDerecha(int _direccionDerecha) { direccionDerecha = _direccionDerecha; }
	
	void manipularDireccion();
	void ajustarVelocidad();

};

