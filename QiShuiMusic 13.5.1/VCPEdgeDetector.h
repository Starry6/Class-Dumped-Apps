@interface VCPEdgeDetector : NSObject
- (void)dealloc;
- (id)initWithImage:edgeMap:width:height:widthExtension:heightExtension:;
- (int)detectWithSigma:lowThreshold:highThreshold:;
- (int)noiseReduction:sigma:imageFiltered:;
- (int)gradientEstimation:width:height:gradient:gradientMag:;
- (BOOL)isInImage:width:height:;
@end
