@interface CITileFilter : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputCenter;
@property (nonatomic) NSNumber inputAngle;
@property (nonatomic) NSNumber inputWidth;
- (void)setInputCenter:;
- (id)inputAngle;
- (id)inputImage;
- (void)setInputImage:;
- (void)setInputAngle:;
- (id)inputCenter;
- (id)_kernel;
- (id)inputWidth;
- (void)setInputWidth:;
- (id)_croppedCenterPixelImage;
+ (id)customAttributes;
@end
