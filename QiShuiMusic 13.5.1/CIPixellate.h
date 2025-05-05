@interface CIPixellate : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputCenter;
@property (nonatomic) NSNumber inputScale;
- (void)setInputCenter:;
- (id)inputScale;
- (void)setInputScale:;
- (id)inputImage;
- (void)setInputImage:;
- (id)inputCenter;
- (id)_kernel;
- (id)outputImage;
+ (id)customAttributes;
@end
