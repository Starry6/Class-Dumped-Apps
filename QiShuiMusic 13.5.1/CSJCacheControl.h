@interface CSJCacheControl : NSObject
- (id)init;
- (void)dealloc;
+ (void)clearAllCache;
+ (void)clearDynamicLayout;
+ (void)clearEventTacker;
+ (void)clearFileCache;
+ (void)clearFullscreenVideo;
+ (void)clearNative;
+ (void)clearRewardVideo;
+ (void)clearSetting;
+ (void)clearSplash;
+ (void)clearSplashVideo;
+ (id)sharedInstance;
@end
