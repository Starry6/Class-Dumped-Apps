@interface CIBicubicScaleTransform : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputScale;
@property (nonatomic) NSNumber inputAspectRatio;
@property (nonatomic) NSNumber inputB;
@property (nonatomic) NSNumber inputC;
- (id)_scale;
- (id)inputScale;
- (void)setInputScale:;
- (id)inputImage;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)outputImage;
- (id)inputAspectRatio;
- (void)setInputAspectRatio:;
- (id)inputB;
- (void)setInputB:;
- (id)inputC;
- (void)setInputC:;
+ (id)customAttributes;
@end
