## stack-101

**GİRDİ**
```
int main() {
  int ch;
  st *s = (st *)malloc(sizeof(st));

  createEmptyStack(s);

  push(s, 1);
  push(s, 2);
  push(s, 3);
  push(s, 4);

  printStack(s);

  pop(s);

  printf("\nSonuncu ITEM Kaldırıldıktan sonra Stack\n");
  printStack(s);
}
```

**ÇIKTI**

````
ITEM EKLENDI => 1
ITEM EKLENDI => 2
ITEM EKLENDI => 3
ITEM EKLENDI => 4
Stack: 1 2 3 4 
ITEM SİLİNDİ => 4

Sonuncu ITEM Kaldırıldıktan sonra Stack
Stack: 1 2 3 
````

### Stack oluşturmaya başlayalım
ilk olarak bir struct tanımlamamız gerekiyor.
*Stack*'imizin alabileceği en büyük boyutu ayarlamak için *MAX* makromuzu tanımlayalım.

```
# define MAX 10
```
````
struct stack {
  int items[MAX];
  int top;
};
typedef struct stack st;
````
Boş bir *Stack* oluşturma fonksiyonu

Eleman sayımız 0'ında altında ise, -1 ise stack'imiz boş oluyor. Daha sonrasında *Stack*'imizn boş duruma düşmemesi için bir dizi kontroller yazacağız.
```
void createEmptyStack(st *s)
{
	s->top = -1;
}
```
structaki eleman sayımızı saymak için global değişken olarak bir `Count` oluşturalım.

`Count` ile *Stack*'imizin boş veya dolu durumlarını kontrol edrek **overflow** *(taşma)* gibi hataların önüne geçebiliriz.
```
int count = 0;
```
bunu *Stack* struct içerisinde tanımlamak daha mantıklı bir çözüm olacaktır. ben global olarak tanımlamayı tercih ettim.



### Overflow durumunu engellemek için kontrol fonksiyonlarımızı yazalım.
İki farklı durum olabilir. Belirlediğimiz `MAX`değerini aşabilir veya *Stack* içerisinde 0 eleman varken bir elemanı silmeye çalıştığımızda eleman sayımız  0'ın altına düşebilir.

### isFull fonksiyonu ile `MAX`değerini geçmeyi engelleyelim
```
// Eğer STACK'imizin en yukarısındaki değer MAX'ımızdan 1 küçükse bir sonraki eleman ekleme (PUSH) işlemine izin vermiyor.

int isFull(st *s)
{
	if (s->top == MAX - 1)
		return (EXIT_FAILURE); // return (1) ile eşdeğerdir.
	else
		return (EXIT_SUCCESS); // return (0) ile eşdeğerdir.
}
```

### isEmpty fonksiyonu ile 0 değerinin altına düşmeyi engelleyelim
```
// Eğer STACK'imizde 0 eleman varsa, eleman silme (POP) işlemine izin vermiyor.

int isEmpty(st *s)
{
	if (s->top == -1)
		return (1);
	else
		return (0);
}
```


### *PUSH* ve *POP*

*Push* stack'imizin en üstüne bir eleman eklerken, *Pop* en yukarıdaki elemanı (son eklenen elamanı) siliyor.

#### stack'a bir eleman eklemek için *PUSH* fonksiyonu oluşturalım.
````
void push(st *s, int newItem)
{
	if (isFull(s))
		printf("STACK DOLU KARŞİMM!");
	else
	{
		s->top++;
		s->items[s->top] = newItem;
		printf("ITEM EKLENDI => %d\n", newItem);
	}
	count++;
}
````
