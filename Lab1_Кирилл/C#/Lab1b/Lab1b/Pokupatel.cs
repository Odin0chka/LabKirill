using System;

namespace Lab1b
{
    class Pokupatel
    {
        private String _fio;
        private int _kol1;
        private Tovar _tovar1;
        private int _kol2;
        private Tovar _tovar2;
        private int _kol3;
        private Tovar _tovar3;
        private float _skidon;

        public Pokupatel()
        {
            _fio = "empty";
            _kol1 = 0;
            _kol2 = 0;
            _kol3 = 0;
            _skidon = 0;
            _tovar1 = new Tovar();
            _tovar2 = new Tovar();
            _tovar3 = new Tovar();
        }
        /*
        public String Max()
        {
            float max = 0;
            int num = -1;
            for (int i = 0; i < 3; i++)
                if (max < _pr[i].Weight())
                {
                    max = _pr[i].Weight();
                    num = i;
                }
            return _pr[num].Name;
        }*/

        public float TotalCost()
        {
            float tot = 0;
            tot = _tovar1.Cost() * _kol1;
            tot += _tovar2.Cost() * _kol2;
            tot += _tovar3.Cost() * _kol3;
            if (_skidon != 0)
                tot *= _skidon / 100;
            return tot;
        }

        public void Init(String name, int skid, int[] kol, Tovar[] tov)
        {
            _fio = name;
            _kol1 = kol[0];
            _kol2 = kol[1];
            _kol3 = kol[2];
            _tovar1 = tov[0];
            _tovar2 = tov[1];
            _tovar3 = tov[2];
            _skidon = skid;
        }

        public void Display()
        {
            Console.WriteLine("Покупатель: " + _fio);
            _tovar1.Display();
            Console.WriteLine("\tКоличество: " + _kol1 + "\n");
            _tovar2.Display();
            Console.WriteLine("\tКоличество: " + _kol2 + "\n");
            _tovar3.Display();
            Console.WriteLine("\tКоличество: " + _kol3 + "\n");
            Console.WriteLine("\tСкидка: " + _skidon + "\n");
            Console.WriteLine("Общая стоимость покупки: " + TotalCost());
        }

        public void Read()
        {
            Console.Write("Укажите ФИО покупателя: ");
            _fio = Console.ReadLine();
            Console.WriteLine("Информация о товарах: ");
            _tovar1.Read();
            Console.Write("\tКоличество: ");
            _kol1 = Convert.ToInt32(Console.ReadLine());
            _tovar2.Read();
            Console.Write("\tКоличество: ");
            _kol2 = Convert.ToInt32(Console.ReadLine());
            _tovar2.Read();
            Console.Write("\tКоличество: ");
            _kol2 = Convert.ToInt32(Console.ReadLine());
            Console.Write("\tСкидка: ");
            _skidon = Convert.ToInt32(Console.ReadLine());
        }
    }
}
