@interface CXXPCChannelProvider : CXChannelProvider
@property (nonatomic) BSServiceConnection connection;
@property (nonatomic) CXChannelServiceDefinition definition;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)definition;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)hostProtocolDelegate;
- (id)queue;
- (void)invalidate;
- (id)initWithConfiguration:;
- (BOOL)requiresProxyingAVAudioSessionState;
@end
