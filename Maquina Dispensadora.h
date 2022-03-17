class Maquina{
	private:
		bool interruptor;
		int numProducto;
		int costo;
		int cambio;
		int productosRestantes;
		int dineroDepositado;
		int teclado;
	public:
		Maquina(); //Constructor
		void encender();
		void apagar();
		void mostrarInfo();
		void leerProducto();
		void regresarCambio();
		void leerDinero();
		void bajarProducto();
		void mensaje();
};
