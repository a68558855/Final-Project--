
			case 1:
				printf("�n�U�`�h��  �п�J�j���w�X�o�Ʀr\n");
				scanf("%d", &c);
				printf("�n��j�٤�p   �j�O1�p�O2  ��������2��\n");
				scanf("%d", &a);
				b = rand() % 10 + 1;
				e = rand() % 10 + 1;
				printf("�A���I�ƬO%d    ���a�o�I�ƬO%d\n",b,e);
				if (a = 1)
				{
					if (b > e)
					{
						money = money + c * 2;
						printf("Ĺ�F\n");
						winlose(money);
					}
					else
					{
						money = money - c;
						printf("��F\n");
						winlose(money);
					}
				}
				else if (a = 2)
				{
					if (b < e)
					{
						money = money + c * 2;
						printf("Ĺ�F\n");
						winlose(money);
					}
					else
					{
						money = money - c;
						printf("��F\n");
						winlose(money);

					}
				}

				break;
		