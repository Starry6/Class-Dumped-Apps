@interface FBApplicationProcessWatchdogPolicy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)watchdogPolicyForProcess:eventContext:;
- (void)_queue_reloadDefaultSettings;
- (void).cxx_destruct;
- (double)_queue_watchdogScalingFactorForAppInfo:isResume:;
+ (id)defaultPolicy;
+ (double)_scaleForGestaltKey:;
+ (double)_defaultLaunchScale;
+ (double)_defaultResumeScale;
+ (double)_defaultFirstPartyAdditionalScale;
@end
