@interface AWEGrouponImageSuperResolutionManager : NSObject
+ (void)trackGrouponImageSRMonitorEvent:pageType:;
+ (id)imageSuperResolutionWithURLList:targetWidth:targetHeight:;
+ (BOOL)isEnableImageSRWithUrl:;
@end
