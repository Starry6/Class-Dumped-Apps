@interface ICSPredefinedValue : NSNumber
- (long long)longValue;
- (id)initWithLong:;
- (id)initWithBytes:objCType:;
- (void)getValue:;
- (id)objCType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (Class)classForCoder;
+ (BOOL)supportsSecureCoding;
+ (id)numberWithLong:;
@end
