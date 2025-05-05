@interface FBSProcess : NSObject
@property (nonatomic) BOOL running;
@property (nonatomic) BSProcessHandle handle;
@property (nonatomic) RBSProcessIdentity identity;
@property (nonatomic) BSMachPortTaskNameRight taskNameRight;
@property (nonatomic) NSInteger pid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)identity;
- (void)dealloc;
- (id)handle;
- (id)succinctDescriptionBuilder;
- (BOOL)isRunning;
- (int)pid;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
- (id)taskNameRight;
- (BOOL)_watchdog:shouldTerminateWithDeclineReason:;
- (id)_watchdog:terminationRequestForViolatedProvision:error:;
- (void)_terminateWithRequest:forWatchdog:;
- (id)_initForCurrentProcess;
+ (id)currentProcess;
@end
