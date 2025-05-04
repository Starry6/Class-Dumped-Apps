@interface AWEBizTabBarDispatchService : HTSService
@property (nonatomic) BOOL tabBarVCHasReload;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hitSecondPageDispatchOpt;
- (double)maxDelayReloadTime;
- (id)placeholderVCName;
- (BOOL)isLastLaunchException;
- (void)setLatestLaunchException:;
- (BOOL)tabBarVCHasReload;
- (void)setTabBarVCHasReload:;
- (id)currentLaunchConfig;
- (id)config;
+ (id)sharedInstance;
@end
