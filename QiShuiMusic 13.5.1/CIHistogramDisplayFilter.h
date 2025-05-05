@interface CIHistogramDisplayFilter : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputHeight;
@property (nonatomic) NSNumber inputHighLimit;
@property (nonatomic) NSNumber inputLowLimit;
- (id)inputImage;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (id)inputHeight;
- (void)setInputHeight:;
- (id)inputHighLimit;
- (void)setInputHighLimit:;
- (id)inputLowLimit;
- (void)setInputLowLimit:;
+ (id)customAttributes;
@end
