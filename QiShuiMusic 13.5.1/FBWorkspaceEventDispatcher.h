@interface FBWorkspaceEventDispatcher : NSObject
- (id)init;
- (id)registerTarget:;
- (id)_initWithConnectionStore:;
- (id)registerSourceWithProcessHandle:;
- (void)_mainThread_dispatchHandshakeFromSource:toTarget:;
- (void)_flushCalloutsWithCompletion:;
- (void).cxx_destruct;
- (void)noteHandshakeFromSource:withRemnants:;
+ (id)sharedInstance;
@end
