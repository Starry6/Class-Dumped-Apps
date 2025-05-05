@interface SFRSA_PSSSigningOperation : SFRSASigningOperation
@property (nonatomic) <SFMaskGenerationFunction> maskGenerationFunction;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithKeySpecifier:digestOperation:;
- (id)maskGenerationFunction;
- (id)initWithKeySpecifier:digestOperation:maskGenerationFunction:;
- (void)setMaskGenerationFunction:;
@end
