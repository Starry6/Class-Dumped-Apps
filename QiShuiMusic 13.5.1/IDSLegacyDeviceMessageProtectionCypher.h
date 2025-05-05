@interface IDSLegacyDeviceMessageProtectionCypher : NSObject
@property (nonatomic) IDSMPPublicLegacyIdentity publicIdentity;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithPublicIdentity:;
- (id)publicIdentity;
- (id)cypherData:withAccountIdentity:identifier:error:;
- (id)decypherData:withAccountIdentity:signingDevicePublicKey:identifier:error:;
- (id)_fullIdentityFromAccountIdentity:error:;
+ (BOOL)supportsSecureCoding;
+ (id)cypherWithEndpoint:error:;
@end
