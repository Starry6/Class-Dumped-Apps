@interface CMTimeRangeAsValue : NSValue
- (BOOL)isEqualToValue:;
- (void)getValue:;
- (id)objCType;
- (id)CMTimeRangeValue;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (Class)classForCoder;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTimeRange:;
@end
