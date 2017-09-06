#include math.h

int math(int num1, int num2, char Op);
{
switch(Op)
	{
	case '+':
		num1 + num2;
		break;
	case '-':
		num1 - num2;
		break;
	case '*':
		num1 * num2;
		break;
	case '/':
		num1 / num2;
		break;
	case '%':
		num1 % num2;
		break;
	default:
		return 0;
		break;
	}
}
//{
//if (Op == '+') num1 + num2;
//else if (Op == '-') num1 - num2;
//else if (Op == '*') num1 * num2;
//else if (Op == '/') num1 / num2;
//else if (Op == '%') num1 % num2;
//else return 0;
//}

		