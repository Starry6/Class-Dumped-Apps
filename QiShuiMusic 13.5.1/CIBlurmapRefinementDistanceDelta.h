@interface CIBlurmapRefinementDistanceDelta : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputSecondaryImage;
@property (nonatomic) NSNumber inputDistance;
@property (nonatomic) NSNumber inputThreshold;
@property (nonatomic) NSNumber inputScalingFactor;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputThreshold;
- (void)setInputThreshold:;
- (id)inputSecondaryImage;
- (void)setInputSecondaryImage:;
- (id)inputScalingFactor;
- (void)setInputScalingFactor:;
- (id)inputDistance;
- (void)setInputDistance:;
@end
