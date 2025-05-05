@interface VSCasePreservingString : NSString
- (unsigned short)characterAtIndex:;
- (id)initWithString:;
- (void)getCharacters:range:;
- (id)lowercaseString;
- (void).cxx_destruct;
- (unsigned long long)length;
- (id)uppercaseString;
- (id)capitalizedString;
- (id)localizedCapitalizedString;
- (id)capitalizedStringWithLocale:;
- (id)localizedLowercaseString;
- (id)lowercaseStringWithLocale:;
- (id)localizedUppercaseString;
- (id)uppercaseStringWithLocale:;
@end
