@interface FBProcessManager : NSObject
@property (nonatomic) <FBProcessWatchdogProviding> defaultWatchdogPolicy;
@property (nonatomic) FBApplicationProcess systemApplicationProcess;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeObserver:;
- (void)_bootstrap_addProcess:;
- (id)processForPID:;
- (id)init;
- (void)addObserver:;
- (void)dealloc;
- (void)_noteShellInitializationComplete;
- (id)registerProcessForAuditToken:;
- (id)processesForBundleIdentifier:;
- (id)watchdogPolicyForProcess:eventContext:;
- (id)_bootstrapProcessWithExecutionContext:synchronously:error:;
- (id)_bootstrapProcessWithHandle:synchronously:error:;
- (id)processForVersionedPID:;
- (id)allApplicationProcesses;
- (id)_reallyRegisterProcessForHandle:;
- (void)_notifyObserversUsingBlock:completion:;
- (id)processForIdentity:;
- (void)setDefaultWatchdogPolicy:;
- (void)noteProcessAssertionStateDidChange:;
- (void)_removeProcess:;
- (id)_createProcessFutureWithExecutionContext:error:;
- (id)currentProcess;
- (void)_bootstrap_consumeLock_addProcess:synchronously:;
- (id)_createProcessWithExecutionContext:error:;
- (void).cxx_destruct;
- (id)allProcesses;
- (id)applicationProcessesForBundleIdentifier:;
- (id)applicationProcessForPID:;
- (void)noteProcessDidExit:;
- (id)description;
- (id)defaultWatchdogPolicy;
- (id)_createProcessFutureForProcessHandle:error:;
- (id)systemApplicationProcess;
- (id)launchProcessWithContext:;
- (id)registerProcessForHandle:;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (id)_sharedInstanceCreateIfNeeded:;
@end
