void EncoderM1(){
  n1 = digitalRead(Motor1_Encoder1);
  if ((Motor1_Encoder1Last == LOW) && (n1 == HIGH)) {
    if (digitalRead(Motor1_Encoder2) == LOW) {
      encoderM1Pos--;
    } else {
      encoderM1Pos++;
    }
  }
  Motor1_Encoder1Last = n1;
  Serial.print( "    " );
  Serial.print( encoderM1Pos );
}

void EncoderM2(){
  n2 = digitalRead(Motor2_Encoder1);
  if ((Motor2_Encoder1Last == LOW) && (n2 == HIGH)) {
    if (digitalRead(Motor2_Encoder2) == LOW) {
      encoderM2Pos--;
    } else {
      encoderM2Pos++;
    }
  }
  Motor2_Encoder1Last = n2;
  Serial.print( "    " );
  Serial.print( encoderM2Pos );
  Serial.print( "    " );
  
  
}

void EncoderM3(){
  n3 = digitalRead(Motor3_Encoder1);
  n33 = digitalRead(Motor3_Encoder2);
  if ((Motor3_Encoder1Last == LOW) && (n3 == HIGH)) {
    if (digitalRead(Motor3_Encoder2) == LOW) {
      encoderM3Pos--;
    } else {
      encoderM3Pos++;
    }
  }
  Motor3_Encoder1Last = n3;
  Serial.print( "    " );
  Serial.print( encoderM3Pos );
  Serial.print( "    " );
 
  
}

void EncoderM4(){
  n4 = digitalRead(Motor4_Encoder1);
  if ((Motor4_Encoder1Last == LOW) && (n4 == HIGH)) {
    if (digitalRead(Motor4_Encoder2) == LOW) {
      encoderM4Pos--;
    } else {
      encoderM4Pos++;
    }
  }
  Motor4_Encoder1Last = n4;
  Serial.print( "    " );
  Serial.print( encoderM4Pos );
  Serial.print( "    " );
}
