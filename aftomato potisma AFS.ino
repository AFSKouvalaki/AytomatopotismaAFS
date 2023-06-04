
#define soil_moisture 3 //εισοδος αισθητήρα υγρασίας
#define pump 13 //έξοδος για άνοιγμα ηλεκτροβάνας
#define led 10 //έξοδος για led

void setup() {
  // put your setup code here, to run once:
  pinMode(pump, OUTPUT); //ορίζουμε το ποδαράκι για έξοδο
  pinMode (led,OUTPUT);//ορίζoυμε το ποδαράκι για έξοδο
  pinMode(soil_moisture, INPUT); //ορίζουμε την είσοδο
  Serial.begin(9600);
}

void loop() {
  
  int val = digitalRead(soil_moisture); //διαβάζει την είσοδο
  Serial.println(val);
  if(val == 1) //αν είναι 0 ανοίγει
  {
    digitalWrite(pump, HIGH); //δίνει ρεύμα στην ηλεκτροβάνα
    digitalWrite (led, HIGH); //ανάβει το led
    delay(5000);
 
  }
  else // αλλίως κλείνει
  {
    delay(5000); 
    digitalWrite(pump, LOW);
    digitalWrite (led, LOW);
  }
}
