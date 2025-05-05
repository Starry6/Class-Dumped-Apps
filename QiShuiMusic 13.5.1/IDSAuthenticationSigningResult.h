@interface IDSAuthenticationSigningResult : NSObject
@property (nonatomic) NSString serverVerifiableEncoding;
@property (nonatomic) NSArray authenticationCertificateSignatures;
@property (nonatomic) NSData inputData;
@property (nonatomic) NSData nonce;
- (id)nonce;
- (void).cxx_destruct;
- (id)description;
- (id)serverVerifiableEncoding;
- (id)authenticationCertificateSignatures;
- (id)initWithSubscriptionIdentifiers:authenticationCertificates:inputData:nonce:signature:;
- (id)inputData;
@end
