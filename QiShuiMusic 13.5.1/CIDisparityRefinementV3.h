@interface CIDisparityRefinementV3 : CIFilter
@property (nonatomic) NSNumber inputScale;
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputMainImage;
@property (nonatomic) CIImage inputMatteImage;
@property (nonatomic) NSDictionary inputTuningParameters;
@property (nonatomic) NSNumber inputDraftMode;
- (id)inputScale;
- (void)setInputScale:;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputTuningParameters;
- (void)setInputTuningParameters:;
- (id)inputMatteImage;
- (id)inputMainImage;
- (id)inputDraftMode;
- (void)setInputDraftMode:;
- (void)setInputMatteImage:;
- (id)alphaImageForMainImage:disparity:;
- (void)setInputMainImage:;
+ (id)customAttributes;
@end
