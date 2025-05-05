@interface ASCLockupFeatureSingleSignOn : NSObject
@property (nonatomic) BOOL requiresSSOEntitlement;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)requiresSSOEntitlement;
- (id)initWithRequiresSSOEntitlement:;
+ (BOOL)supportsSecureCoding;
@end
