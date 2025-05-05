@interface CMTimeMappingAsValue : NSValue
- (BOOL)isEqualToValue:;
- (void)getValue:;
- (id)objCType;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (Class)classForCoder;
- (id)copyWithZone:;
- (id)CMTimeMappingValue;
+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTimeMapping:;
@end
