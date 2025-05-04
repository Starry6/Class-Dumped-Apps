@interface AWENearbyImageSuperResolutionManager : NSObject
+ (void)trackGrouponImageSRMonitorEvent:pageType:;
+ (id)imageSuperResolutionWithURLList:targetWidth:targetHeight:;
+ (BOOL)isEnableImageSRWithUrl:;
@end
