@interface CISingleChannelColorMap : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputChannelIndex;
@property (nonatomic) NSNumber inputShouldNormalize;
@property (nonatomic) NSNumber inputColorMapIndex;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputChannelIndex;
- (void)setInputChannelIndex:;
- (id)inputShouldNormalize;
- (void)setInputShouldNormalize:;
- (id)inputColorMapIndex;
- (void)setInputColorMapIndex:;
+ (id)customAttributes;
@end
