@interface BDWebImageCryptoKey : NSObject
@property (nonatomic) NSString asymmetricPublicKey;
@property (nonatomic) NSString symmetricKey;
- (id)asymmetricPublicKey;
- (void)setAsymmetricPublicKey:;
- (void)setSymmetricKey:;
- (void).cxx_destruct;
- (id)symmetricKey;
@end
