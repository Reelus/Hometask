пропуски
а) адресу
б) 0, NULL, адресу
в) 0

твердження
а) Невірно
б) Невірно
в) Вірно

масив
а)
const int SIZE = 10;
float numbers\[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};

б)
float \*pPtr;

в)
for (int i = 0; i < SIZE; i++) {
printf("%.1f ", numbers\[i]);
}

г)
pPtr = numbers;
pPtr = \&numbers\[0];

ґ)
for (int i = 0; i < SIZE; i++) {
printf("%.1f ", \*(pPtr + i));
}

д)
for (int i = 0; i < SIZE; i++) {
printf("%.1f ", \*(numbers + i));
}

е)
for (int i = 0; i < SIZE; i++) {
printf("%.1f ", pPtr\[i]);
}

є)
numbers\[3];
\*(numbers + 3);
pPtr\[3];
\*(pPtr + 3);
\*(3 + pPtr);
3\[pPtr];

ж) Адреса буде 1002532 (1002500 + 8 \* 4 байти) значення 8.8 (елемент numbers\[8])

з) Адреса буде 1002504 (1002520 - 4 \* 4 байти) значення 1.1 (елемент numbers\[1])

змінні:
float number1 = 7.3, number2;

а) float \*fPtr;
б) fPtr = \&number1;
в) printf("%.1f\\n", \*fPtr);
г) number2 = fPtr;
ґ) printf("%.1f\\n", number2);
д) printf("%p\\n", (void)\&number1);
е) Так

Помилки у фрагментах коду з картинки:
а) zPtr не ініціалізований
б) int намагаєтся присвоїти вказівник
в) zPtr\[2] - готове число
г) z - імя масиву

