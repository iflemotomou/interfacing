# interfacing
Βασική λειτουργία εξαρτημάτων (καλωδίωση, βιβλιοθήκες, κώδικας)
1. <b> DS3231 RCT: Αρχική εισαγωγή ημέρας/ημερομηνίας/ώρας </b> <br>
Γενικά: κατέβασμα από <a href="http://www.rinkydinkelectronics.com/library.php?id=73" rel="nofollow"> εδώ </a> του αρχείου DS3231.zip στο φάκελο libraries του Arduino και, στη συνέχεια από το μενού IDE: Σχέδιο>Συμπερίληψη βιβλιοθήκης>Προσθήκη βιβλιοθήκης ZIP. Μετά, άνοιγμα του παραδείγματος DS3231_Serial_Easy στο μενού Αρχείο. Uncomment τις 3 γραμμές του κώδικα για τον ορισμό της ημέρας και της ημερομηνίας/ώρας και ανέβασμα. Μετά, πάλι comment και ανέβασμα για έλεγχο από την σειριακή του IDE. <br>
Στην περίπτωση του Arduino UNO: κατέβασμα του DS3231_Serial_Easy_UNO.ino (το αρχείο έχει συρρικνωθεί στα απαραίτητα).<br>
<b> DS3231 RCT: τιμές σε LCD I2C και στη σειριακή οθόνη IDE για έλεγχο </b>
<br> κώδικας: DS3231.Serial.lcd.i2c.ino, καλωδιώσεις: DS3231.Serial.lcd.i2c.jpg
2. <b> SS49E Hall Sensor και Module: Gaussmeter, στη σειριακή IDE και σε LCD I2C  </b> <br>
κώδικας: hall.A0.gauss.SS49E_serial.LCD.I2C.ino, καλωδιώσεις: hall.A0.gauss.SS49E.module_serial.LCD.I2C.jpg και η όμορφη αναπαράσταση των μετρήσεων στη σειριακή IDE: hall.A0.gauss.SS49E_serial.LCD.I2C.IDE.jpg
<br>
