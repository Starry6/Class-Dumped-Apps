@interface LSRegistrationInfo : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)mutableCopyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
