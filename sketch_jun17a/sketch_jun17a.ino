#define numaraIlkIki 18   //Ogrenci numarasinin ilk ve son iki numarasini buraya yazar
#define numaraSonIki 71

#define LATCH 2 //STCP
#define DATA 3 //DS
#define CLK 4 //SHCP
#define MR 5 //MR
#define NOKTA 128
#define HARF_A 119  //1110111
#define HARF_B 124 //1111100
#define HARF_C 57  //0111001
#define HARF_D 94  //1011110
#define HARF_E 121 //1111001
#define HARF_F 113 //1110001

byte cc_rakamlar[10] = {
        63,  //0  (0b00111111)
        6,   //1   (0b00000110)
        91,  //2  (0b01011011)
        79,  //3  (0b01001111)
        102, //4 (0b01100110)
        109, //5 (0b01101101)
        125, //6 (0b01111101)
        7,   //7   (0b00000111)
        127, //8 (0b01111111)
        111  //9  (0b01101111)
      }; 

void setup(){
  pinMode(LATCH, OUTPUT);   //Atanan pinlerin modlarÄ± belirtildi
  pinMode(DATA, OUTPUT);
  pinMode(CLK, OUTPUT);
  pinMode(MR, OUTPUT);
  digitalWrite(MR, LOW);   //Setup her calistirildiginda Master Reset e reset atmak gerekir
  digitalWrite(MR, HIGH);  //Once LOW sonra HIGH vererek reset atiyoruz
}

void loop(){

  converter(numaraIlkIki);
  delay(1000);
  converter(numaraSonIki);
  delay(1000);
  
}

void converter(int number){   //Bu fonksiyon kendisine gonderilen iki basamakli sayilari once 
    int bolum = number / 16;  // Hexadecimal e cevirir sonra ise ledYak fonksiyonuna gonderip
    ledYak(bolum);            // cevirilen hexadecimal sayiyinin 7 segment displayde yazdirilmasini
    int kalan = number%16;    // saglar
    ledYak(kalan); 
}

void ledYak(int sayi){   // Bu fonksiyon converter fonk. dan aldigi sayilari displaye yazdirir
  if(sayi == 10){
    digitalWrite(LATCH, LOW);
    shiftOut(DATA, CLK, MSBFIRST,HARF_A);
    digitalWrite(LATCH, HIGH);
  }
  else if(sayi == 11){
    digitalWrite(LATCH, LOW);
    shiftOut(DATA, CLK, MSBFIRST,HARF_B);
    digitalWrite(LATCH, HIGH);
  }
  else if(sayi == 12){
    digitalWrite(LATCH, LOW);
    shiftOut(DATA, CLK, MSBFIRST,HARF_C);
    digitalWrite(LATCH, HIGH);
  }
  else if(sayi == 13){
    digitalWrite(LATCH, LOW);
    shiftOut(DATA, CLK, MSBFIRST,HARF_D);
    digitalWrite(LATCH, HIGH);
  }
  else if(sayi == 14){
    digitalWrite(LATCH, LOW);
    shiftOut(DATA, CLK, MSBFIRST,HARF_E);
    digitalWrite(LATCH, HIGH);
  }
  else if(sayi == 15){
    digitalWrite(LATCH, LOW);
    shiftOut(DATA, CLK, MSBFIRST,HARF_F);
    digitalWrite(LATCH, HIGH);
  }
  else{
    digitalWrite(LATCH, LOW);
    shiftOut(DATA, CLK, MSBFIRST,cc_rakamlar[sayi]);
    digitalWrite(LATCH, HIGH);
  }
}
