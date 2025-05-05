@interface NSFileSecurity : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)_cfTypeID;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
@end
