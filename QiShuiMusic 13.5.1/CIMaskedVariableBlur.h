@interface CIMaskedVariableBlur : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputMask;
@property (nonatomic) NSNumber inputRadius;
- (void)setInputRadius:;
- (id)inputImage;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)inputRadius;
- (id)outputImage;
- (id)inputMask;
- (void)setInputMask:;
- (id)_kernelD2;
- (id)_kernelCombine;
- (id)downTwo:;
- (id)upCubic:scale:;
+ (id)customAttributes;
@end
