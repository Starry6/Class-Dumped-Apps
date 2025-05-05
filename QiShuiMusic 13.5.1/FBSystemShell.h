@interface FBSystemShell : NSObject
@property (nonatomic) Q _state;
@property (nonatomic) FBSystemShellInitializationContext initializationContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)_state;
- (id)_initWithOptions:;
- (void)_setState:;
- (void)_setSystemIdleSleepDisabled:forReason:;
- (void)_startSystemShellService;
- (id)succinctDescriptionBuilder;
- (void)_addBlockToExecuteWhenReady:;
- (void)_informSystemShellServiceDidFinishLaunching;
- (void)sendActionsToBackBoard:;
- (id)initializationContext;
- (void).cxx_destruct;
- (void)readyForInteraction;
- (id)assertWatchdogEnabledForLimitedDurationForReason:;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
- (void)_initializationComplete;
+ (id)sharedInstance;
+ (id)_createSingletonWithOptions:;
@end
