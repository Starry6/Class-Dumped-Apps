@interface NEPacketTunnelFlow : NSObject
@property (nonatomic) NSFileHandle socket;
- (void)dealloc;
- (id)socket;
- (void)setSocket:;
- (void).cxx_destruct;
- (void)readPacketsWithCompletionHandler:;
- (void)readPacketObjectsWithCompletionHandler:;
- (BOOL)writePackets:withProtocols:;
- (BOOL)writePacketObjects:;
@end
