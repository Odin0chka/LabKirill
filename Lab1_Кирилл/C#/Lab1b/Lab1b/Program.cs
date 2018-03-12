using System;

namespace Lab1b
{
    class Program
    {
        static void Main(string[] args)
        {
            Pokupatel chpok = new Pokupatel();
            Pokupatel chpok2 = new Pokupatel();
            Tovar[] tvari = new Tovar[3];
            int[] kol_mas = new int[3];
            for (int i = 0; i < 3; i++)
                tvari[i] = new Tovar();
            tvari[0].Init("Бичка", 120, 1);
            kol_mas[0] = 10000;
            tvari[1].Init("Сыр", 500, 3);
            kol_mas[1] = 3;
            tvari[2].Read();
            Console.Write("\tКоличество: ");
            kol_mas[2] = Convert.ToInt32(Console.ReadLine());

            chpok.Init("Осинин Алексей Коснтантинович", 50, kol_mas, tvari);
            chpok.Display();
            Console.WriteLine();
            chpok2.Read();
            Console.WriteLine("\nВывод");
            chpok2.Display();

            Console.ReadLine();
        }
    }
}









//float max = mas[0].Average();
//int c = 1;
//for (int i = 1; i < 3; i++)
//    if (mas[i].Average() > max)
//    {
//        max = mas[i].Average();
//        c = i + 1;
//    }