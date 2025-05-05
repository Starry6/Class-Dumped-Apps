@interface BDMannorSplashLaunchContext : NSObject
@property (nonatomic) BOOL isHotLaunch;
@property (nonatomic) Q launchType;
@property (nonatomic) q splashRequestAfterTime;
- (void)setIsHotLaunch:;
- (BOOL)isHotLaunch;
- (void)setSplashRequestAfterTime:;
- (long long)splashRequestAfterTime;
- (id)init;
- (void)setLaunchType:;
- (unsigned long long)launchType;
@end
