@interface IDSPublicDeviceIdentity : NSObject
@property (nonatomic) IDSMPPublicLegacyIdentity legacyIdentity;
@property (nonatomic) IDSMPPublicDeviceIdentity modernIdentity;
@property (nonatomic) IDSPublicAccountIdentity accountIdentity;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)accountIdentity;
- (id)copyWithZone:;
- (id)initWithPublicLegacyIdentity:modernIdentity:accountIdentity:;
- (id)legacyIdentity;
- (id)modernIdentity;
+ (BOOL)supportsSecureCoding;
@end
