@interface AWEIMVideoExportUtility : NSObject
+ (id)checkTimeRange:forAsset:;
+ (id)transformForAsset:targetSize:;
+ (id)validCMTimeRange:maxDuration:;
+ (void)exportAsset:toPath:suggestedSize:frameRate:completion:;
+ (id)exportSessionWithAVAsset:suggestedSize:frameRate:;
+ (id)buildExportSessionWithAsset:clipRange:suggestedSize:frameRate:;
+ (id)orientationFromTransform:;
@end
