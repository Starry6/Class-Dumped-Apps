@interface NSMutableCharacterSet : NSCharacterSet
- (id)init;
- (void)addCharactersInString:;
- (void)removeCharactersInString:;
- (void)formIntersectionWithCharacterSet:;
- (void)addCharactersInRange:;
- (id)initWithCoder:;
- (void)removeCharactersInRange:;
- (BOOL)isMutable;
- (void)invert;
- (id)mutableCopyWithZone:;
- (void)formUnionWithCharacterSet:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)characterSetWithBitmapRepresentation:;
+ (id)whitespaceCharacterSet;
+ (id)newlineCharacterSet;
+ (id)characterSetWithRange:;
+ (id)characterSetWithContentsOfFile:;
+ (id)uppercaseLetterCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)controlCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)symbolCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)letterCharacterSet;
+ (id)characterSetWithCharactersInString:;
+ (id)punctuationCharacterSet;
+ (id)illegalCharacterSet;
@end
