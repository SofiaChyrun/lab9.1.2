﻿#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h> 
#include "../ChyrunSofia9.1.2/ChyrunSofia9.1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
int N = 3;
namespace UnitTest912
{
	TEST_CLASS(UnitTest912)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			int t;
			int N=3, s=0;
			Specialist* p = new Specialist[N];
			p[0].fizyk = 5;
			p[1].fizyk = 5;
			p[2].fizyk = 5;
			p[0].matem = 5;
			p[1].matem = 5;
			p[2].matem = 5;
			p[0].student = p[1].student = p[2].student = (Student)s;
			p[0].progr = 5;
			p[1].progr = 5;
			p[2].progr = 5;
			for (int i = 0; i < N; i++)
			{
				p[i].serbl = (p[i].fizyk + p[i].matem + p[i].progr) / N;
			}
			t = (int) MinSerbal(p, N);
			Assert::AreEqual(t, 5);
		}
	};
}
