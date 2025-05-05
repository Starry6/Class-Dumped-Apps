@interface VCPInterAssetAnalyzer : NSObject
- (id)init;
- (int)_generateLastFrameDistanceDescriptor:withDescriptorClass:forAsset:;
- (id)_getThumbnailForAsset:withResouces:andPixelFormat:;
- (int)generateDistanceDescriptor:withDescriptorClass:forAsset:withResources:lastFrame:;
- (int)computeDistance:withDescriptorClass:fromAsset:toAsset:;
- (int)computeDistance:fromArray:toArray:;
+ (BOOL)canUseLastFrameOfAsset:withResources:;
+ (id)thumbnailSizeForAsset:withResources:;
@end
