using System;

namespace Lab1CS
{
    class Program
    {
        static void Main(string[] args)
        {
            Coordinate c1 = new Coordinate();
            Console.WriteLine("Укажите координату первой точки");
            c1.Read();

            Console.WriteLine("\nKоордината:");
            c1.Display();
            Console.Write("Новое значение x1 (setter): ");
            float n = Convert.ToInt32(Console.ReadLine());
            c1.X1 = n;
            Console.WriteLine("Получаем x1 (getter): " + c1.X1);
            
            Console.ReadLine();
        }
    }
}
