@interface DYSDKLauncher : NSObject
@property (nonatomic) DYSDKInitialConfig config;
- (void)p_didFinishLaunchWithConfig:;
- (void)p_launchWithOptions:config:;
- (void)setConfig:;
- (void).cxx_destruct;
- (id)config;
- (void)p_start;
+ (void)bootLoad;
+ (void)launchWithOptions:config:;
+ (void)start;
+ (void)launch;
+ (id)sharedLauncher;
@end
