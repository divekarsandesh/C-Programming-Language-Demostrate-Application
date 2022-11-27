
class StaticDemo
{
	public static void main(String arg[])
	{
		System.out.println("Inside main");
	}
}

class Demo
{
	public int No1;          //Non static characteristic
	public int No2;          //Non static characteristic
	public static int No3;   //static characteristic
	public static int No4;   //static characteristic
	
	static    // static block
	{
		System.out.println("Inside static block");
		No3 = 51;
		No4 = 101;
	}
	public Demo    // Constructor
	{
		System.out.println("Inside constructor");
		No1 = 11;
		No2 = 21;
	}
	public void fun()
	{
		System.out.println("Inside non static method Fun");
	}
	public void gun()
	{
		System.out.println("Inside static method gun");
	}
}