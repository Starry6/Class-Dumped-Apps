@interface AWEScreenShotImageCacheUtil : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)screenShotImageCachePath;
- (id)captureScreenShot;
- (void)cacheScreenShotImage:withName:completion:;
- (void)imageDataWithName:completion:;
- (void)cleanImageDataWithName:completion:;
- (void)setQueue:;
- (void).cxx_destruct;
- (id)queue;
+ (BOOL)shouldDisableScreenShot;
+ (id)sharedInstance;
@end
