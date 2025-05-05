@interface CMTimeAsValue : NSValue
- (unsigned short)unsignedShortValue;
- (unsigned long long)unsignedLongValue;
- (unsigned long long)unsignedLongLongValue;
- (long long)longValue;
- (int)intValue;
- (BOOL)isEqualToValue:;
- (unsigned char)unsignedCharValue;
- (unsigned int)unsignedIntValue;
- (float)floatValue;
- (long long)longLongValue;
- (double)doubleValue;
- (void)getValue:;
- (id)objCType;
- (id)initWithCoder:;
- (short)shortValue;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (char)charValue;
- (unsigned long long)unsignedIntegerValue;
- (BOOL)boolValue;
- (id)description;
- (Class)classForCoder;
- (long long)integerValue;
- (id)CMTimeValue;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTime:;
@end
