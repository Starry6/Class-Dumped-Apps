@interface ABVCardActivityAlertScanner : NSObject
- (unsigned long long)position;
- (void)dealloc;
- (id)initWithString:;
- (BOOL)atEnd;
- (unsigned short)nextCharacter;
- (id)scanAlertValue;
- (id)scanKeyValuePair;
- (id)scanStringValue;
- (id)scanUnquotedStringValue;
- (id)scanQuotedStringValue;
- (BOOL)scanPastKeyValueSeparator;
- (BOOL)scanPastItemDelimiter;
- (unsigned short)scanCharacter;
- (unsigned short)scanCharacterWithEscaping:;
- (BOOL)scanPastCharacter:;
- (void)scanPastWhitespace;
- (unsigned short)nextUnescapedCharacter;
+ (id)scannerWithString:;
+ (id)scanAlertValueFromString:;
+ (BOOL)characterIsStringValueCharacter:;
@end
