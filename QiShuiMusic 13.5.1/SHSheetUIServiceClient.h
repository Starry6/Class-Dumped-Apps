@interface SHSheetUIServiceClient : NSObject
@property (nonatomic) BSServiceConnection connection;
@property (nonatomic) q state;
@property (nonatomic) q pendingRequest;
@property (nonatomic) SHSheetUIServiceClientContext currentContext;
@property (nonatomic) NSString sessionIdentifier;
@property (nonatomic) <SHSheetContentPresenter> presenter;
- (id)presenter;
- (void)setState:;
- (id)sessionIdentifier;
- (id)currentContext;
- (void)setCurrentContext:;
- (long long)state;
- (void)_didInvalidateConnection;
- (id)connection;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (void)connect;
- (void)invalidate;
- (void)_reconnect;
- (long long)pendingRequest;
- (void)setPendingRequest:;
- (void)updateWithContext:;
- (id)initWithSessionIdentifier:presenter:;
- (void)_setupNewConnection;
- (id)sessionServer;
- (void)_activateConnection;
- (void)_didActivateConnection;
@end
