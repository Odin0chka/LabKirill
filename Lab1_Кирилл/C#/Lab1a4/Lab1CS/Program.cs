using System;

namespace Lab1CS
{
    class Program
    {
        static void Main(string[] args)
        {
            Coordinate[] one = new Coordinate[3];
            float[] res = new float[3];
            for (int i = 0; i < 3; i++)
                one[i] = new Coordinate();

            one[0].Init(0, 15, 10, 22, 17, 20);
            one[1].Init(5, 2, 3, -5, -6, -7);
            one[2].Init(40, 55, 66, 120, 150, 123);
            for (int i = 0; i < 3; i++)
            {
                one[i].Display();
                res[i] = one[i].LenghtOt();
            }
            Console.Write("Результат: ");
            foreach (float c in res)
                Console.Write(c + " ");

            Console.ReadLine();
        }
    }
}
