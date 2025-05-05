@interface CISDOFHighlightRecovery : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputScale;
@property (nonatomic) NSNumber inputApertureScaling;
@property (nonatomic) NSNumber inputIterations;
@property (nonatomic) NSNumber inputMaxBlur;
@property (nonatomic) CIVector inputBlurRadius;
@property (nonatomic) CIVector inputMaxIntensity;
@property (nonatomic) CIVector inputMinIntensity;
- (id)inputScale;
- (void)setInputScale:;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputApertureScaling;
- (id)inputMaxBlur;
- (void)setInputApertureScaling:;
- (void)setInputMaxBlur:;
- (id)inputIterations;
- (void)setInputIterations:;
- (id)inputBlurRadius;
- (void)setInputBlurRadius:;
- (id)inputMaxIntensity;
- (void)setInputMaxIntensity:;
- (id)inputMinIntensity;
- (void)setInputMinIntensity:;
+ (id)customAttributes;
@end
