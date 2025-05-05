@interface ASAuthorizationPlatformPublicKeyCredentialDescriptor : NSObject
@property (nonatomic) ASCPublicKeyCredentialDescriptor coreDescriptor;
@property (nonatomic) NSData credentialID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)credentialID;
- (id)initWithCredentialID:;
- (void)setCredentialID:;
- (id)coreDescriptor;
+ (BOOL)supportsSecureCoding;
@end
