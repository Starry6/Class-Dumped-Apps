@interface AWEAlertConfigService : HTSService
@property (nonatomic) double foregroundLaunchTS;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)trackEvent:params:;
- (void)onAppDidBecomeActive;
- (void)interceptorActionBeforeTriggerEventWithEvent:;
- (void)checkConfig;
- (void)setForegroundLaunchTS:;
- (void)trackEarlyEventIfNeeded:;
- (void)addLynxPopupIfNeeded:forEvent:;
- (BOOL)enableTrackEarlyEvent;
- (id)earlyEventWhitelist;
- (double)foregroundLaunchTS;
- (id)objectFromSettingsForKeyPath:defaultValue:stable:;
- (void)dealloc;
- (void)setup;
- (void)handleDidBecomeActive;
+ (void)checkConfig;
+ (id)shared;
@end
