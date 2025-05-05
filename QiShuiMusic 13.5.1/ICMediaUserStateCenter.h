@interface ICMediaUserStateCenter : NSObject
@property (nonatomic) NSArray allUserStates;
@property (nonatomic) ICMediaUserState activeUserState;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)applyServerStateUpdatedWithUserStates:;
- (id)allUserStates;
- (id)activeUserState;
- (void)refreshUserStatesWithCompletion:;
- (id)_establishClientConnection;
- (id)_getUserStatesForcingRefresh:;
- (void)_onAsyncServer:;
- (void)_onSyncServer:;
- (void)setAllUserStates:;
+ (id)shared;
@end
