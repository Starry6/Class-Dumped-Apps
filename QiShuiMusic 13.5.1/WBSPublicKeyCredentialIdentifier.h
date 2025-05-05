@interface WBSPublicKeyCredentialIdentifier : NSObject
@property (nonatomic) NSString credentialID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)credentialID;
- (id)initWithCredentialID:;
+ (BOOL)supportsSecureCoding;
@end
