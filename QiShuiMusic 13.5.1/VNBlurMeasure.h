@interface VNBlurMeasure : NSObject
+ (BOOL)computeBlurScore:onGrayscaleImage:andWithRegionOfInterestInImageCoordinates:andRegionOfInterestInsetFactor:error:;
+ (BOOL)computeBlurScore:onGrayscaleImage:insetFactor:error:;
+ (BOOL)computeBlurScore:usingBlurSignature:insetFactor:imageROI:error:;
+ (BOOL)computeEdgeWidthBlurScore:onGrayscaleImage:error:;
+ (BOOL)computeApproximateBlurScore:onGrayscaleImage:sampledPixelsCount:insetFactor:error:;
+ (BOOL)computeApproximateBlurScore:onRGBAImage:sampledPixelsCount:insetFactor:error:;
@end
