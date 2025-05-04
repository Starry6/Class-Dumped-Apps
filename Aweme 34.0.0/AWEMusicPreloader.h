@interface AWEMusicPreloader : NSObject
+ (void)cancelTaskByKey:;
+ (void)preloadMusicPlayerModel:preloadSize:didStart:didEnd:didCancelled:;
+ (void)preloadMusicPlayerModel:preloadSize:;
+ (void)preloadMusicPlayerModel:;
+ (void)cancelTaskByModel:;
+ (int)getCacheSize:;
+ (void)cancelAllTasks;
@end
