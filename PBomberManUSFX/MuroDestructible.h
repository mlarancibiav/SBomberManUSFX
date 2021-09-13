#pragma once
class MuroDestructible
{
private:
	int altoMuroFragil;
	int anchoMuroFragil;
	int ubicacionMuroFragil;

public:
	int getAltoMuroFragil() { return altoMuroFragil; }
	void setAltoMuroFragil(int _altoMuroFragil) { altoMuroFragil = _altoMuroFragil; }

	int getAnchoMuroFragil() { return anchoMuroFragil; }
	void setAnchoMuroFragil(int _anchoMuroFragil) { anchoMuroFragil = _anchoMuroFragil; }

	int getUbicacionFragil() { return ubicacionMuroFragil; }
	void setUbicacionFragil(int _ubicacionMuroFragil) { ubicacionMuroFragil = _ubicacionMuroFragil; }

	void MostrarMuroFragil();
	void DestruirMuro();
};


