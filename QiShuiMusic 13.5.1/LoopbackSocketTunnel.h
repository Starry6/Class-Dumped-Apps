@interface LoopbackSocketTunnel : NSObject
@property (nonatomic) NSObject optionalArg;
- (id)initWithPort:delegate:error:;
- (int)sendPacketToVTP:;
- (void)getIPPort:;
- (void)getVTPIPPort:;
- (void)setVTPIP:;
- (void)shutdownSocket;
- (int)serverLoopProc;
- (id)optionalArg;
- (void)setOptionalArg:;
@end
