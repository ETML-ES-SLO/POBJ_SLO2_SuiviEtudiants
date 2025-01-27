import java.io.Console;

public class startJava {
	
	//-- attributs --// 
	//-- type primaire --// 
	//--> Entier
	private byte 	integerVal8bits; 
	private short 	integerVal16bits; 
	private int 	integerVal32bits; 
	private long 	integerVal64bits; 
	
	//--> Reel 
	private float 	floatVar32bits; 
	private double 	floatVar64bits; 
	
	//-- autre type --// 
	private boolean boolVal; 
	
	//-- méthode --//
	public void FctDemoAttributs()
	{
		//-- hiérachie de la gestion des constantes --// 
		integerVal8bits = (byte)130;
		integerVal16bits = integerVal8bits; 
		integerVal32bits = integerVal16bits; 
		integerVal64bits = integerVal32bits; 
		
		integerVal64bits = 1000;
		integerVal32bits = (int)integerVal64bits;
		integerVal16bits = (short)integerVal32bits; 
		integerVal8bits = (byte)integerVal16bits; 
		
		floatVar32bits = (float)3.14;
		floatVar64bits = 3.14; 
	}
	
	
	//-- méthode static -> non lié à la class
	public static void main(String[] args) 
	{
		//-- déclaration d'attributs --// 
		
		//-- déclaration d'objet --// 
		startJava demo_O; 
		
		//-- initialisation de l'objet 
		//-- appel du constructeur de démo --//
		demo_O = new startJava(); 
		
		//-- objet -> avec méthode --// 
		demo_O.FctDemoAttributs();
		
		//-- lien entre les variables --// 
		
		
		
		// TODO Auto-generated method stub
		//-- appel de la méthode --// 
		
	
	}

}
