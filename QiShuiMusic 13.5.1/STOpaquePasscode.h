@interface STOpaquePasscode : NSObject
@property (nonatomic) NSString passcode;
- (id)passcode;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithPasscode:;
- (BOOL)isEqualToOpaquePasscode:;
+ (BOOL)supportsSecureCoding;
@end
