@interface ASAuthorizationSecurityKeyPublicKeyCredentialDescriptor : NSObject
@property (nonatomic) ASCPublicKeyCredentialDescriptor coreDescriptor;
@property (nonatomic) NSArray transports;
@property (nonatomic) NSData credentialID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)transports;
- (void)setTransports:;
- (id)copyWithZone:;
- (id)initWithCredentialID:transports:;
- (id)credentialID;
- (void)setCredentialID:;
- (id)coreDescriptor;
+ (BOOL)supportsSecureCoding;
@end
