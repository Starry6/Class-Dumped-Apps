@interface RSABSSATokenIssuer : NSObject
@property (nonatomic) NSData publicKey;
@property (nonatomic) NSData keyId;
- (id)init;
- (id)publicKey;
- (void)setPublicKey:;
- (void).cxx_destruct;
- (id)keyId;
- (id)initWithKeyByteCount:;
- (id)blindSign:error:;
@end
