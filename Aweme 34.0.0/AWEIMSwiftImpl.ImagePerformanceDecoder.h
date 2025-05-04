@interface AWEIMSwiftImpl.ImagePerformanceDecoder : HTSService
- (id)init;
+ (id)imageResolutionFromData:;
+ (id)reduceImageResolutionFromData:targetSize:;
+ (id)reduceImageResolutionWithRate:fromData:containerSize:info:;
+ (id)sceneKey;
@end
