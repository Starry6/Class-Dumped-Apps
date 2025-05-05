@interface COSE_Sign1 : COSE
@property (nonatomic) NSData signature;
@property (nonatomic) NSArray x509bag;
@property (nonatomic) NSArray x509chain;
@property (nonatomic) NSString x509uri;
@property (nonatomic) NSString x509hashAlgorithmIdentifier;
@property (nonatomic) NSData x509hashValue;
- (id)signature;
- (id)description;
- (id)initWithCBOR:;
- (id)x509bag;
- (id)x509chain;
- (id)x509uri;
- (id)x509hashAlgorithmIdentifier;
- (id)x509hashValue;
- (id)initWithProtectedHeaders:unprotectedHeaders:payload:signature:includeCBORTag:;
@end
