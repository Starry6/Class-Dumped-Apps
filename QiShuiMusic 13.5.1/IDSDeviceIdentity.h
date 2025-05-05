@interface IDSDeviceIdentity : NSObject
@property (nonatomic) IDSMPFullLegacyIdentity legacyIdentity;
@property (nonatomic) IDSMPFullDeviceIdentity modernIdentity;
@property (nonatomic) IDSAccountIdentity accountIdentity;
@property (nonatomic) <ENDevicePublicKey> devicePublicKey;
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
- (id)devicePublicKey;
- (id)legacyIdentity;
- (id)modernIdentity;
- (id)initWithLegacyIdentity:modernIdentity:accountIdentity:;
+ (BOOL)supportsSecureCoding;
@end
