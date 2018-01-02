
			case 1:
				printf("要下注多少  請輸入大於籌碼得數字\n");
				scanf("%d", &c);
				printf("要比大還比小   大是1小是2  中獎獎金2倍\n");
				scanf("%d", &a);
				b = rand() % 10 + 1;
				e = rand() % 10 + 1;
				printf("你的點數是%d    莊家得點數是%d\n",b,e);
				if (a = 1)
				{
					if (b > e)
					{
						money = money + c * 2;
						printf("贏了\n");
						winlose(money);
					}
					else
					{
						money = money - c;
						printf("輸了\n");
						winlose(money);
					}
				}
				else if (a = 2)
				{
					if (b < e)
					{
						money = money + c * 2;
						printf("贏了\n");
						winlose(money);
					}
					else
					{
						money = money - c;
						printf("輸了\n");
						winlose(money);

					}
				}

				break;
		