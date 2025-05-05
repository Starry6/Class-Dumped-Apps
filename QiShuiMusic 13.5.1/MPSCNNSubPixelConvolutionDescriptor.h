@interface MPSCNNSubPixelConvolutionDescriptor : MPSCNNConvolutionDescriptor
@property (nonatomic) Q subPixelScaleFactor;
- (void)setSubPixelScaleFactor:;
- (unsigned long long)subPixelScaleFactor;
@end
