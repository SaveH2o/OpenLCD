//Hardware pin definitions

//For the SMD backpack
#define LCD_RS A0
#define LCD_RW A1
#define LCD_EN A2
#define LCD_D4 A3
#define LCD_D5 2
#define LCD_D6 3
#define LCD_D7 4
#define BL_RW 5 //PWM
#define BL_G  6 //PWM
#define BL_B  7 //PWM
#define SIZE_JUMPER 8
#define LCD_CONTRAST 9 //PWM
//#define BL_B  9 //PWM
//#define SIZE_JUMPER 7

#define SPI_CS 10 //As a slave device CS pin must always be 10
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_SCK 13

//Define the different baud rate levels
#define BAUD_1200	0
#define BAUD_2400	1
#define BAUD_4800	2
#define BAUD_9600	3
#define BAUD_14400	4
#define BAUD_19200	5
#define BAUD_38400	6
#define BAUD_57600	7
#define BAUD_115200	8
#define BAUD_230400	9
#define BAUD_460800	10
#define BAUD_921600	11
#define BAUD_1000000	12

const byte DEFAULT_TWI_ADDRESS = 0x72; //0x71 for Serial7Segment. 0x72 for SerLCD.
const byte DEFAULT_BAUD = BAUD_9600;  //9600 for 8MHz, 2x speed
const byte DEFAULT_BRIGHTNESS = 255;  //100%, full brightness
const byte DEFAULT_LINES = 2;
const byte DEFAULT_WIDTH = 16;
const byte DEFAULT_SPLASH = true; //Default on
const byte DEFAULT_CONTRAST = 20; //Lower number, darker contrast. 20 works well on 16x2 single backlight
const byte MCP4725_ADDR = 0x60; //I2C address for DAC on contrast pin

//Internal EEPROM locations for the user settings
#define LOCATION_BAUD 0
#define LOCATION_TWI 1
#define LOCATION_SPLASH_ONOFF 2
#define LOCATION_LINES 3
#define LOCATION_WIDTH 4
#define LOCATION_RED_BRIGHTNESS 5
#define LOCATION_GREEN_BRIGHTNESS 6
#define LOCATION_BLUE_BRIGHTNESS 7
#define LOCATION_IGNORE_RX 8
#define LOCATION_TWI_ADDRESS 9
#define LOCATION_CONTRAST 10
#define LOCATION_SPLASH_CONTENT 20 //This is 4*20 or 80 bytes wide
#define LOCATION_CUSTOM_CHARACTERS 100 //This is 8*8 or 64 bytes wide

//Define the various commands
#define SPECIAL_COMMAND 254 //0xFE: The command to do special HD77480 commands
#define SPECIAL_SETTING '|' //124, 0x7C, the pipe character: The command to do special settings: baud, lines, width, backlight, splash, etc

#define SPECIAL_RED_MIN 128 //Command minimum for red/white backlight brightness
#define SPECIAL_GREEN_MIN (SPECIAL_RED_MIN+30) //Command for green backlight brightness
#define SPECIAL_BLUE_MIN (SPECIAL_GREEN_MIN+30) //Command for blue backlight brightness

//Used for the different color backlights
#define RED    0
#define BLUE   1
#define GREEN  2

const byte BUFFER_SIZE = 64; //Number of characters we can hold in the incoming buffer
const byte DISPLAY_BUFFER_SIZE = 80; //4x20 the max number of characters we will display at one time

#define SYSTEM_MESSAGE_DELAY 500 //Amount of time (ms) we spend displaying splash and system messages

//Global setting variables
byte settingLCDwidth;
byte settingLCDlines;
byte settingSplashEnable;
byte settingUARTSpeed;

