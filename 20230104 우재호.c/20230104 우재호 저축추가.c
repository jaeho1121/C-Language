#include <stdio.h>
void main()
{
	int choice, total, inputMoney, drawMoney;
	printf("�ʱ� �ݾ��� �Է����ּ���. :");
	scanf_s("%d", &total);
	while (1)
	{
		printf("1.���� / 2.��� / 3.�ܰ� / 4.���� :");
		scanf_s("%d", &choice);
		if (choice == 1)
		{
			printf("���� �ݾ� : %d��\n", total);
			printf("�󸶸� �Ա��Ͻðڽ��ϱ�? : ");
			scanf_s("%d", &inputMoney);
			total += inputMoney;
			printf("���� ����! ���� �ݾ� : %d��\n\n\n", total);

		}
		else if (choice == 2)
		{
			printf("���� �ݾ� : %d��\n", total);
			printf("�󸶸� ����Ͻðڽ��ϱ�? :");
			scanf_s("%d", &drawMoney);
			if (drawMoney > total)
			{
				printf("���� ����!\n\n\n");

			}
			else
			{
				total -= drawMoney;
				printf("��� ����! ���� �ܱ� : %d��\n\n\n", total);
			}
		}
		else if (choice == 3)
		{
			printf("���� �ݾ� : %d��\n\n\n", total);
		}
		else if (choice == 4)
		{
			printf("���� �ݾ� : %d��\n\n\n", total);
			break;
		}
		else
		{
			printf("�߸� �Է��߽��ϴ�.\n\n\n");
		}
	}
	system("pause");
}
