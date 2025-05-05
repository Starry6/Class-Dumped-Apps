@interface MetalFilterLut : MetalFilterDefault
@property (nonatomic) NSInteger initErrorSdr;
@property (nonatomic) NSInteger initErrorHdr;
- (void)checkColorConversion:YCbCrMatrixAttachment:;
- (id)getEffectPatameterStr;
- (id)getFragmentShader;
- (int)initError;
- (int)initErrorHdr;
- (int)initErrorSdr;
- (long long)renderBefore:frame:;
- (void)setInitErrorHdr:;
- (void)setInitErrorSdr:;
- (void)dealloc;
- (id)process:;
- (void)setEffect:;
- (void).cxx_destruct;
- (id)initWithDictionary:index:;
@end
