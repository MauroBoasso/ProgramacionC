package Personas;

import java.util.Calendar;

public class Persona {
	private String nombreYapell;
	private int dni;
	private Calendar fechaDeNac=Calendar.getInstance();
	private String sexo;
	private float peso;
	private float altura;
	
	public Persona(int dni) {
		if (dni>0) 
			this.dni=dni;
		else
			System.out.printf("Dni inválido");
		this.nombreYapell="N N";
		this.fechaDeNac.set(2000,1,1);
		this.sexo="femenino";
		this.peso=1;
		this.altura=1;
	}	
	public Persona(int dni, String nombre) {
		this.sexo="femenino";
		this.peso=1;
		this.altura=1;
		if (dni>0) 
			this.dni=dni;
		else
			System.out.printf("Dni inválido");
		if (nombre != "") 
			this.nombreYapell=nombre;
		else
			System.out.printf("Nombre inválido");
		this.fechaDeNac.set(2010,9,27);
	}
	public Persona(int dni, String nombre, Calendar fechaNac) {
		this.sexo="femenino";
		this.peso=1;
		this.altura=1;
		if (dni>0) 
			this.dni=dni;
		else
			System.out.printf("Dni inválido");
		if (nombre != "") 
			this.nombreYapell=nombre;
		else
			System.out.printf("Nombre inválido");
		if (fechaNac != null)
			this.fechaDeNac=fechaNac;// averiguar lo del date
		else System.out.printf("La fecha de nacimiento es inválida");
	}
	public String get_nombre() {
		return this.nombreYapell;}
		public int get_dni() {
			
			return this.dni;
		}
		public String get_sexo() {
			return this.sexo;
		}
		public float get_altura(){
			return this.altura;}
			public float get_peso() {
				return this.peso;
			}
			private int calcularEdad() {
				
				Calendar fechaActual = Calendar.getInstance();
				int difaños = fechaActual.get(Calendar.YEAR) - this.fechaDeNac.get(Calendar.YEAR);
				int difmeses = fechaActual.get(Calendar.MONTH) - this.fechaDeNac.get(Calendar.MONTH);
				int difdias = fechaActual.get(Calendar.DAY_OF_MONTH) - this.fechaDeNac.get(Calendar.DAY_OF_MONTH);
				if ( (difmeses<0) || ( (difmeses==0) && (difdias<0) ) )   // si todavia no llego al mes de su cumpleaños o todavia no llego al dia de su cumpleaños
					difaños--;
				return difaños;
			}
			public int get_edad() {
				return calcularEdad();
			}
			public float get_indicemasa() {
				return this.peso / this.altura;
			}
			public boolean esta_enforma() {
				if (get_indicemasa()<18.25 || get_indicemasa()>25)
					return false;
				else 
					return true;
			}
			public boolean get_cumple_años() {
				Calendar fechaActual= Calendar.getInstance();
				if ((fechaActual.get(Calendar.YEAR) == this.fechaDeNac.get(Calendar.YEAR)) && (fechaActual.get(Calendar.MONTH) == this.fechaDeNac.get(Calendar.MONTH)) && (fechaActual.get(Calendar.DAY_OF_MONTH) == this.fechaDeNac.get(Calendar.DAY_OF_MONTH)))
					return true;
				else
					return false;
			}
			public boolean get_esmayor() {
				if (calcularEdad()>= 18)
					return true;
				else return false;
			}
			public boolean get_puede_votar() {
				if (calcularEdad() >= 16) // calculo la edad por las dudas que el usuario haya ingresado la incorrecta.
					return true;
				else
					return false;
			}
			public Calendar get_fecha_nac()
			{
				return this.fechaDeNac;
			}
			public String get_DatosPersona() {
				Calendar fechanac=get_fecha_nac();
				return get_nombre()+" tiene como dni "+get_dni()+ ",  su sexo es " + get_sexo()+ ", su altura " + get_altura() + ", su peso " + get_peso() + " y su fecha de nacimiento " + fechanac.get(Calendar.DAY_OF_MONTH) + "/" + fechanac.get(Calendar.MONTH) + "/" + fechanac.get(Calendar.YEAR) + " corresponde con que tenga " + get_edad() + " años."; 
			}
}
