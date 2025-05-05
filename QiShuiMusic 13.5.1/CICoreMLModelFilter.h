@interface CICoreMLModelFilter : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) MLModel inputModel;
@property (nonatomic) NSNumber inputHeadIndex;
@property (nonatomic) NSNumber inputSoftmaxNormalization;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputModel;
- (void)setInputModel:;
- (id)inputHeadIndex;
- (void)setInputHeadIndex:;
- (id)inputSoftmaxNormalization;
- (void)setInputSoftmaxNormalization:;
+ (id)customAttributes;
@end
