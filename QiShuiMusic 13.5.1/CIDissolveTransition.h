@interface CIDissolveTransition : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputTargetImage;
@property (nonatomic) NSNumber inputTime;
- (id)inputTime;
- (id)inputImage;
- (void)setInputTime:;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (id)inputTargetImage;
- (void)setInputTargetImage:;
- (id)_fadeKernel;
+ (id)customAttributes;
@end
