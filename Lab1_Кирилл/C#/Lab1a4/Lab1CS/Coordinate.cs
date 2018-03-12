﻿using System;

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
    }
}
