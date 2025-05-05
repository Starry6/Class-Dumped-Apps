@interface CXXPCProvider : CXProvider
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSInteger notifyToken;
- (void)setNotifyToken:;
- (void)dealloc;
- (int)notifyToken;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)hostProtocolDelegate;
- (void)invalidate;
- (id)initWithConfiguration:;
- (BOOL)requiresProxyingAVAudioSessionState;
@end
