@interface SWSignedPersonIdentityProof : SWPersonIdentityProof
@property (nonatomic) NSData signatureData;
- (void).cxx_destruct;
- (id)initWithPersonIdentityProof:signatureData:;
- (id)signatureData;
@end
