@interface VNHeatMapUtilities : NSObject
+ (BOOL)smoothedFloat32ImageBuffer:fromImageBuffer:originalImageSize:sigmaX:sigmaY:nStd:;
+ (float)maximumValueFromFloat32ImageBuffer:;
+ (id)significantRegionsFromFloat32ImageBuffer:threshold:;
+ (id)significantRegionsFromFloat32ImageBuffer:threshold:relativeToMaximum:;
+ (id)significantRegionsFromFloat32PixelBuffer:threshold:relativeToMaximum:error:;
+ (id)boundingBoxesFromFloat32ImageBuffer:thresholds:error:;
+ (id)boundingBoxesFromFloat32ImageBuffer:thresholds:relativeToMaximum:applySmoothing:originalImageSize:sigmaX:sigmaY:nStd:error:;
+ (id)boundingBoxesFromFloat32PixelBuffer:thresholds:relativeToMaximum:applySmoothing:originalImageSize:sigmaX:sigmaY:nStd:error:;
@end
