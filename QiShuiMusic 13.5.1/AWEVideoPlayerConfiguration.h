@interface AWEVideoPlayerConfiguration : NSObject
- (void)awemeSettingDidChange;
- (id)init;
- (void)dealloc;
+ (void)_setupIESIMALMVideoPlayerConfig;
+ (void)configALMPlayer;
+ (void)_setupIESIMVideoPlayerConfig;
+ (id)getPlayerABConfig;
+ (id)getPlayerGlobalThreadPoolABConfig;
+ (id)getPlayerGlobalThreadPoolOptions;
+ (id)getPlayerOptions;
+ (id)getVideoEngineLocalServerABConfig;
+ (id)getVideoEngineLocalServerOptions;
+ (id)sharedInstance;
+ (void)setup;
@end
