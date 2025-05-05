@interface PKMetalUtility : NSObject
+ (id)defaultDevice;
+ (double)layerContentsScale;
+ (BOOL)deviceSupportsFramebufferFetch:;
+ (BOOL)deviceSupportsMemorylessFramebuffers:;
+ (id)clampedPixelSize:;
+ (id)textureFromImage:device:;
+ (id)transformConvertingRect:toRect:percent:;
+ (BOOL)isMetalAvailable;
@end
