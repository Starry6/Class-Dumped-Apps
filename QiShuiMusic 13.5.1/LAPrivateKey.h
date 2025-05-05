@interface LAPrivateKey : NSObject
@property (nonatomic) LAPublicKey publicKey;
- (void)dealloc;
- (id)publicKey;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithKey:;
- (id)right;
- (id)description;
- (void)setRight:;
- (BOOL)canSignUsingSecKeyAlgorithm:;
- (BOOL)canDecryptUsingSecKeyAlgorithm:;
- (BOOL)canExchangeKeysUsingSecKeyAlgorithm:;
- (void)signData:secKeyAlgorithm:completion:;
- (void)decryptData:secKeyAlgorithm:completion:;
- (void)exchangeKeysWithPublicKey:secKeyAlgorithm:secKeyParameters:completion:;
@end
