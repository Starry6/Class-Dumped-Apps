@interface CIBarsSwipeTransition : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputTargetImage;
@property (nonatomic) NSNumber inputAngle;
@property (nonatomic) NSNumber inputWidth;
@property (nonatomic) NSNumber inputBarOffset;
@property (nonatomic) NSNumber inputTime;
- (id)inputTime;
- (id)inputAngle;
- (id)inputImage;
- (void)setInputTime:;
- (void)setInputImage:;
- (void)setInputAngle:;
- (id)_kernel;
- (id)outputImage;
- (id)inputWidth;
- (id)inputTargetImage;
- (void)setInputTargetImage:;
- (void)setInputWidth:;
- (id)inputBarOffset;
- (void)setInputBarOffset:;
+ (id)customAttributes;
@end
