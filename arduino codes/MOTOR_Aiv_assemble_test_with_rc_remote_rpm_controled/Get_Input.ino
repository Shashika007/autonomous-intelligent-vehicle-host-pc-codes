void GetInput() {
  CH1 = map(pulseIn(A0, HIGH, 30000), 1000, 2000, -255, 255);
  CH2 = map(pulseIn(A1, HIGH, 30000), 1000, 2000, -255, 255);
  CH3 = map(pulseIn(A2, HIGH, 30000), 1000, 2000, -255, 255);
  CH5 = map(pulseIn(A3, HIGH, 30000), 1000, 2000, -255, 255);

  FilterCH1();
  FilterCH2();
  FilterCH3();

  ///////////Upper and Low Dead band
  if ( CH1av > 256) CH1av = 255;
  if ( CH1av > 350) CH1av = 0;
  if ( CH1av < -350) CH1av = 0;
  if ( CH1av < -256) CH1av = -255;
  if ( CH2av > 256) CH2av = 255;
  if ( CH2av > 350) CH2av = 0;
  if ( CH2av < -350) CH2av = 0;
  if ( CH2av < -256) CH2av = -255;
  if ( CH3av > 256) CH3av = 255;
  if ( CH3av > 350) CH3av = 0;
  if ( CH3av < -350) CH3av = 0;
  if ( CH3av < -256) CH3av = -255;

  ////////// center Dead band
  if ( CH1av <= 10 && CH1av >= -10) {
    CH1av = 0;
  }

  if ( CH2av <= 10 && CH2av >= -10) {
    CH2av = 0;
  }

  if ( CH3av <= 10 && CH3av >= -10) {
    CH3av = 0;
  }
  ////////////////
  if(CH5>0){
    digitalWrite(Motor1_Run, HIGH);
    digitalWrite(Motor2_Run, HIGH);
    digitalWrite(Motor3_Run, HIGH);
    digitalWrite(Motor4_Run, HIGH);
  }
  else {
    digitalWrite(Motor1_Run, LOW);
    digitalWrite(Motor2_Run, LOW);
    digitalWrite(Motor3_Run, LOW);
    digitalWrite(Motor4_Run, LOW);
  }


  
  //  Serial.print( CH1 );
  //  Serial.print( "    " );
  //  Serial.print( CH2 );
  //  Serial.print( "    " );
  //  Serial.print( CH3 );d
  //  Serial.print( "    " );
  //  Serial.print( CH1av );
  //  Serial.print( "    " );
  //  Serial.print( CH2av );
  //  Serial.print( "    " );
  //  Serial.println( CH3av );
}
