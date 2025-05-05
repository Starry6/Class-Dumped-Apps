@interface ABVCardDateScanner : NSObject
@property (nonatomic) Q position;
- (unsigned long long)position;
- (id)initWithString:;
- (BOOL)isAtEnd;
- (long long)scanComponentValueOfLength:;
- (long long)scanCalendarUnit:;
- (unsigned long long)lengthOfCalendarUnit:;
- (BOOL)scanLeapMarker;
- (unsigned short)nextCharacter;
+ (id)scannerWithString:;
@end
