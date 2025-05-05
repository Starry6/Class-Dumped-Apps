@interface ICPrefManager : NSObject
@property (nonatomic) NSXPCConnection authConnection;
- (id)init;
- (void)dealloc;
- (void)startQuery:;
- (id)remoteAuthManager;
- (void)addSelectorToInterface:selectorString:origin:;
- (id)authManagerConnection;
- (void)endQuery:;
- (void)invalidateQueries;
- (BOOL)openRemoteAuthenticationManager;
- (id)getContentsAuthorizationStatus;
- (void)requestContentsAuthorizationShouldPrompt:completion:;
- (id)getControlAuthorizationStatus;
- (void)requestControlAuthorizationShouldPrompt:completion:;
- (BOOL)getGoodNewsStatus;
- (void)resetContentsAuthorizationWithCompletion:;
- (void)resetControlAuthorizationWithCompletion:;
- (id)authConnection;
- (void)setAuthConnection:;
+ (id)defaultAuthManager;
@end
