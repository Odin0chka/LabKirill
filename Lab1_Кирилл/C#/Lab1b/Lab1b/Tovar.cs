using System;

namespace Lab1b
{
    class Tovar
    {
        private String _name;
        private float _price;
        private int _ves;

        public Tovar()
        {
            _name = "empty";
            _price = 0;
            _ves = 0;
        }

        public void Init(String name, int price, int ves)
        {
            _name = name;
            _price = price;
            _ves = ves;
        }

        public void Display()
        {
            Console.WriteLine("\tНаименование товара: " + _name);
            Console.WriteLine("\tЦена за киллограмм: " + _price);
            Console.WriteLine("\tВес: " + _ves);
        }

        public float Cost()
        {
            return _price * _ves;
        }

        public void Read()
        {
            Console.Write("\tНаименование товара: ");
            _name = Console.ReadLine();
            Console.Write("\tЦена за киллограмм: ");
            _price = (float)Convert.ToDouble(Console.ReadLine());
            Console.Write("\tВес: ");
            _ves = Convert.ToInt32(Console.ReadLine());
        }

        public String Name
        {
            get
            {
                return _name;
            }
        }
    }
}
