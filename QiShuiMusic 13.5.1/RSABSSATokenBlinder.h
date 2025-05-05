@interface RSABSSATokenBlinder : NSObject
@property (nonatomic) NSData keyId;
- (id)publicKey;
- (void).cxx_destruct;
- (id)keyId;
- (id)initWithPublicKey:error:;
- (id)tokenWaitingActivationWithContent:error:;
- (BOOL)verifyFullyParsedASN1:end:error:;
- (BOOL)setParamsForSize:params:error:;
+ (id)keyIDFromSPKI:;
@end
