@interface CICircularityDescriptor : CIFilter
@property (nonatomic) CIVector inputExtent;
@property (nonatomic) CIImage inputCentroid;
- (id)outputImage;
- (id)inputExtent;
- (void)setInputExtent:;
- (id)inputCentroid;
- (void)setInputCentroid:;
@end
