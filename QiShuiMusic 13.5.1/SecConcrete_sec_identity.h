@interface SecConcrete_sec_identity : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithIdentity:;
- (void).cxx_destruct;
- (id)initWithIdentityAndCertificates:certificates:;
- (id)initWithCertificates:signBlock:decryptBlock:queue:;
@end
