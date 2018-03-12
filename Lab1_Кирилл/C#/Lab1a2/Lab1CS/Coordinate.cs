using System;

namespace Lab1CS
{
    class Coordinate
    {
        private float x1;
        private float y1;
        private float z1;
        private float x2;
        private float y2;
        private float z2;

        public float X1
        {
            get
            {
                return x1;
            }
            set
            {
                x1 = value;
            }
        }

        public Coordinate()
        {
            x1 = 0;
            y1 = 0;
            z1 = 0;
            x2 = 0;
            y2 = 0;
            z2 = 0;
        }

        public void Init(float cx1, float cy1, float cz1, float cx2, float cy2, float cz2)
        {
            x1 = cx1;
            y1 = cy1;
            z1 = cz1;
            x2 = cx2;
            y2 = cy2;
            z2 = cz2;
        }

        public void Read()
        {
            Console.Write("\tx1: ");
            x1 = (float)Convert.ToDouble(Console.ReadLine());
            Console.Write("\ty1: ");
            y1 = (float)Convert.ToDouble(Console.ReadLine());
            Console.Write("\tz1: ");
            z1 = (float)Convert.ToDouble(Console.ReadLine());
            Console.Write("\tx2: ");
            x2 = (float)Convert.ToDouble(Console.ReadLine());
            Console.Write("\ty2: ");
            y2 = (float)Convert.ToDouble(Console.ReadLine());
            Console.Write("\tz2: ");
            z2 = (float)Convert.ToDouble(Console.ReadLine());
        }

        public void Display()
        {
            Console.WriteLine("\tx1: " + x1);
            Console.WriteLine("\ty1: " + y1);
            Console.WriteLine("\tz1: " + z1);
            Console.WriteLine("\tx2: " + x2);
            Console.WriteLine("\ty2: " + y2);
            Console.WriteLine("\tz2: " + z2);
            Console.WriteLine("\tДлина отрезка: " + LenghtOt());
        }

        public float LenghtOt()
        {
            float len = (float)Math.Sqrt(Math.Pow(x1 + x2, 2) + Math.Pow(y1 + y2, 2) + Math.Pow(z1 + z2, 2));
            return len;
        }

        public Coordinate add(Coordinate one, Coordinate two)
        {
            Coordinate n = new Coordinate();
            n.x1 = one.x1;
            n.y1 = one.y1;
            n.z1 = one.z1;
            n.x2 = two.x2;
            n.y2 = two.y2;
            n.z2 = two.z2;
            return n;
        }
    }
}
