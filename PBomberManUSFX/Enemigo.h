#pragma once
class Enemigo
{
private:
	int altoEnemigo;
	int anchoEnemigo;
	int color;
	int posicionArriba, posicionAbajo, posicionIzquierda, posicionDerecha;

public:

	int getAltoEnemigo() { return altoEnemigo; }
	void setAltoEnemigo(int _altoEnemigo) { altoEnemigo = _altoEnemigo; }

	int getAnchoEnemigo() { return anchoEnemigo; }
	void setAnchoEnemigo(int _anchoEnemigo) { anchoEnemigo = _anchoEnemigo; }

	int getColor() { return color; }
	void setColor(int _color) { color = _color; }

	int getPosicionArriba() { return posicionArriba; }
	void setPosicionArriba(int _posicionArriba) { posicionArriba = _posicionArriba; }

	int getPosicionAbajo() { return posicionAbajo; }
	void setPosicionAbajo(int _posicionAbajo) { posicionAbajo = _posicionAbajo; }

	int getPosicionIzquierda() { return posicionIzquierda; }
	void setPosicionIzquierda(int _posicionIzquierda) { posicionIzquierda = _posicionIzquierda; }

	int getPosicionDerecha() { return posicionDerecha; }
	void setPosicionDerecha(int _posicionDerecha) { posicionDerecha = _posicionDerecha; }

	void Mover();
	void Matar();
	void Morir();
	void CambiarDeDireccion();
	void Velocidad();

};

