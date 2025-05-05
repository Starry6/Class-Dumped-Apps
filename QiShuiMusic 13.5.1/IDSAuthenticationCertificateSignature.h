@interface IDSAuthenticationCertificateSignature : NSObject
@property (nonatomic) NSString subscriptionIdentifier;
@property (nonatomic) NSString serverVerifiableEncoding;
@property (nonatomic) IDSAuthenticationCertificate authenticationCertificate;
@property (nonatomic) NSData signature;
- (id)signature;
- (id)subscriptionIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)serverVerifiableEncoding;
- (id)initWithSubscriptionIdentifier:authenticationCertificate:signature:nonce:;
- (id)initWithSubscriptionIdentifier:authenticationCertificate:signature:serverVerifiableEncoding:;
- (id)authenticationCertificate;
@end
