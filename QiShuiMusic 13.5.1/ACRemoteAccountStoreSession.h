@interface ACRemoteAccountStoreSession : NSObject
@property (nonatomic) NSXPCListenerEndpoint listenerEndpoint;
@property (nonatomic) NSString effectiveBundleID;
@property (nonatomic) BOOL notificationsEnabled;
- (id)_connection;
- (void)setNotificationsEnabled:;
- (id)init;
- (void)dealloc;
- (BOOL)notificationsEnabled;
- (id)synchronousRemoteObjectProxyWithErrorHandler:;
- (id)remoteObjectProxy;
- (id)effectiveBundleID;
- (id)remoteObjectProxyWithErrorHandler:;
- (void)_locked_connection:setNotificationsEnabled:;
- (void)_setConnectionInterrupted;
- (void)setEffectiveBundleID:;
- (void).cxx_destruct;
- (id)listenerEndpoint;
- (void)_locked_configureRemoteAccountStoreWithConnection:;
- (id)initWithListenerEndpoint:delegate:;
- (void)_locked_connection:setEffectiveBundleID:;
- (void)_setConnectionInvalidated;
@end
