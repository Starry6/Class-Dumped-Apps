@interface SFRSA_OAEPEncryptionOperation : SFRSAEncryptionOperation
@property (nonatomic) <SFMaskGenerationFunction> maskGenerationFunction;
- (id)initWithKeySpecifier:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)maskGenerationFunction;
- (void)setMaskGenerationFunction:;
- (id)initWithKeySpecifier:maskGenerationFunction:;
@end
