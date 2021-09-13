#pragma once
class Escenario
{
private:
	int altoEscenario;
	int anchoEscenario;
	int colorPiso;

public:

	int getaltoEscenario() { return altoEscenario; }
	void setaltoEscenario(int _altoEscenario) { altoEscenario = _altoEscenario; }

	int getAnchoEscenario() { return anchoEscenario; }
	void setAnchooEscenario(int _anchoEscenario) { anchoEscenario = _anchoEscenario; }

	int getColorPiso() { return colorPiso; }
	void setColorPiso(int _colorPiso) { colorPiso = _colorPiso; }

	void MostrarEscenario();

};

