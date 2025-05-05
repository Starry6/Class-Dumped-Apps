@interface CIColorCube : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputCubeDimension;
@property (nonatomic) NSData inputCubeData;
@property (nonatomic) NSNumber inputExtrapolate;
- (void)dealloc;
- (id)inputImage;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (void)setInputCubeData:;
- (id)_kernelOpaque;
- (id)_kernelOpaqueExtend;
- (id)cubeImage;
- (BOOL)_checkInputs;
- (id)inputCubeDimension;
- (void)setInputCubeDimension:;
- (id)inputCubeData;
- (id)inputExtrapolate;
- (void)setInputExtrapolate:;
+ (id)customAttributes;
@end
