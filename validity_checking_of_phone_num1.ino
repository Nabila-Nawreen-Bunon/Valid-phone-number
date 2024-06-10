String phoneNum;
void setup()
{
  Serial.begin(9600);
  Serial.println("Enter a phoneNum:");
}

void loop()
{
  if(Serial.available()>0){
    phoneNum=Serial.readString();
    phoneNum.trim();
    if(isValidPhoneNum(phoneNum)){
      Serial.println(" Valid phoneNum:" +phoneNum);
    }else{
      Serial.println("Invalid phoneNum:"+phoneNum);
    }
    Serial.println("Enter another phone Num to check:");
  }
}
      
    
    
 

  bool isValidPhoneNum(String str){
    if(str.length()!=10){
      return false;
    }
    for(int i=0;i<str.length();i++){
      if(!isDigit(str[i])){
        return false;
      }
    }
    return true;
  }