@interface SFAutoFillPasskeyIdentifier : NSObject
@property (nonatomic) WBSPublicKeyCredentialIdentifier coreIdentifier;
@property (nonatomic) NSString credentialID;
- (id)coreIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)credentialID;
- (id)initWithCoreIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
