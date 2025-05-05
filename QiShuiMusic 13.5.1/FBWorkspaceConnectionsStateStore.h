@interface FBWorkspaceConnectionsStateStore : NSObject
@property (nonatomic) q _lastUsedBuffer;
@property (nonatomic) FBWorkspaceConnectionsState state;
- (id)_initWithIdentifier:;
- (id)init;
- (void)setState:;
- (void)_setFailureModeForNextWrite:;
- (id)state;
- (void).cxx_destruct;
- (long long)_lastUsedBuffer;
+ (void)_unlinkAllForIdentifier:;
+ (void)_unlinkShmPath:graceful:;
+ (BOOL)_storeState:toPath:withGeneration:injectedFailure:;
+ (id)_loadStateFromPath:outGeneration:outExisted:;
@end
