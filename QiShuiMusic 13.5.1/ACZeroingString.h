@interface ACZeroingString : NSString
@property (nonatomic) ^S characters;
@property (nonatomic) Q length;
- (void)dealloc;
- (Class)classForKeyedArchiver;
- (unsigned short)characterAtIndex:;
- (id)initWithString:;
- (void)getCharacters:range:;
- (id)initWithBytes:length:encoding:;
- (id)initWithUTF8String:;
- (id)initWithCoder:;
- (id)replacementObjectForCoder:;
- (void)encodeWithCoder:;
- (id)characters;
- (unsigned long long)length;
- (Class)classForCoder;
- (id)initWithCharacters:length:;
- (BOOL)_allowsDirectEncoding;
- (id)_compatibleCopy;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (Class)classForKeyedUnarchiver;
+ (id)_emptyString;
@end
