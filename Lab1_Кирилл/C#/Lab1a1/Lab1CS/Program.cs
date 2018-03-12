using System;

namespace Lab1CS
{
    class Program
    {
        static void Main(string[] args)
        {
            Coordinate c1 = new Coordinate();
            Coordinate c2 = new Coordinate();
            Coordinate sum = new Coordinate();

            Console.WriteLine("Укажите координату первой точки");
            c1.Read();
            c2.Init(5, 10, 15, 25, 30, 35);

            sum = sum.add(c1, c2);

            Console.WriteLine("\nПервая координата: ");
            c1.Display();
            Console.WriteLine("\nВторая координата: ");
            c2.Display();
            Console.WriteLine("\nСумма отрезков: ");
            sum.Display();

            Console.ReadLine();
        }
    }
}
