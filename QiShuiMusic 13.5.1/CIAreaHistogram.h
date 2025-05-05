@interface CIAreaHistogram : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputExtent;
@property (nonatomic) NSNumber inputScale;
@property (nonatomic) NSNumber inputCount;
- (void)setInputCount:;
- (id)inputCount;
- (id)inputScale;
- (void)setInputScale:;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputData;
- (id)outputImage;
- (id)inputExtent;
- (void)setInputExtent:;
- (id)outputImageMPS;
- (id)_netExtent;
- (BOOL)_inputsAreOK;
- (id)outputImageNonMPS;
+ (id)customAttributes;
@end
