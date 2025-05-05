@interface VCClientRelay : NSObject
@property (nonatomic) BOOL stopVTPReceiveThread;
- (void)dealloc;
- (int)stopRelay;
- (int)startRelay;
- (id)initWithIDSSocket:;
- (void)setConnectionResult:;
- (int)setupVTPSocket;
- (BOOL)relayIDSPacket;
- (BOOL)relayVTPPacket;
- (BOOL)stopVTPReceiveThread;
@end
