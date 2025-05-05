@interface AVCPacketRelaySocketConnection : NSObject
@property (nonatomic) C type;
@property (nonatomic) BOOL isDemuxNeeded;
@property (nonatomic) @? readHandler;
@property (nonatomic) AVCPacketFilter packetFilter;
- (void)dealloc;
- (int)start;
- (int)stop;
- (unsigned char)type;
- (id)description;
- (id)readHandler;
- (void)setReadHandler:;
- (void)readyToRead;
- (BOOL)sendData:size:error:;
- (BOOL)isDemuxNeeded;
- (void)setIsDemuxNeeded:;
- (id)packetFilter;
- (void)setPacketFilter:;
- (id)initWithSocket:remoteAddress:packetFilter:;
- (void)receiveDataOnSocket:;
@end
