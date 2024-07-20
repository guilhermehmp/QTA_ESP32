#define redeon 13            // Verifica se a rede está on/off
#define releger 21            // Rele de carga do gerador  
#define relerede 22           // Rele de carga da rede
#define desliga_ger 12        // Botão desliga gerador manual
#define liga_ger 33          // Botão liga gerador manual 
#define autom 27             // Define modo automatico 
#define man 14                // Define modo manual
#define ger_on 25             // Sensor para verificar se o gerador foi ligado
#define emergencia 32		      // Botão de emergencia
#define partida 19              // Rele para dar partida no gerador
#define buzzer 23            // Buzzer de alertas
#define alert_ger 18          // Led de alerta indicando que o gerador não ligou


unsigned long starttime = 0;  // Variável para registrar o tempo de início
unsigned long endtime = 0;    // Variável para registrar o tempo de término
unsigned long elapsedtime = 0; // Variável para registrar o tempo decorrido
int count = 0;                // Contador de vezes em que o gerador foi utilizado
int i, aux, aux1 = 0;         // Variáveis auxiliares
int j = 1;                    // Variáveis auxiliares

void setup() {
  pinMode(releger, OUTPUT);
  pinMode(relerede, OUTPUT);
  pinMode(redeon, INPUT);
  pinMode(autom, INPUT);
  pinMode(man, INPUT);
  pinMode(desliga_ger, INPUT);
  pinMode(liga_ger, INPUT);
  pinMode(ger_on, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(alert_ger, OUTPUT);
  pinMode(emergencia, INPUT);
  pinMode(partida, OUTPUT);
  Serial.begin(115200);
}