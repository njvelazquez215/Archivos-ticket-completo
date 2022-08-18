#ifndef __TICKET_H__

	#define __TICKET_H__

	#include <string>

	#include "../../../Lib/Lib_Hora/Lib_Hora_Poli_Gene/Hora.h"

	using namespace std;

	class Ticket : public Hora
	{
		private:

			//-------------
			// Dato Privado
			//-------------

			string datos;
			string nro;

			//-----------------
			// Servicio Privado
			//-----------------

			void ParsearDatos();

		public:

			//--------------------
			// Constructor Publico
			//--------------------

			Ticket();
			Ticket(const string);

			//-------------------
			// Destructor Publico
			//-------------------

			~Ticket();

			//-------------------------
			// Asignar Atributo Publico
			//-------------------------

			void AsignarDatos(const string);

			//-------------------------
			// Obtener Atributo Publico
			//-------------------------

			string ObtenerDatos() const;
			string ObtenerNro() const;
			Hora * ObtenerHora();

			//-----------------
			// Servicio Publico
			//-----------------

			int Validar();
			void Mostrar();
			void Mostrar(const string);
	};

	//-------------------------
	// Asignar Atributo Publico
	//-------------------------

	inline void Ticket::AsignarDatos(const string datos)
	{
		this->datos = datos;

		this->ParsearDatos();

		return;
	}

	//-------------------------
	// Obtener Atributo Publico
	//-------------------------

	inline string Ticket::ObtenerDatos() const
	{
		return(this->datos);
	}

	inline string Ticket::ObtenerNro() const
	{
		return(this->nro);
	}

	inline Hora * Ticket::ObtenerHora()
	{
		return (Hora *) this;
	}

#endif
