@interface AVCPacketRelay : NSObject
@property (nonatomic) NSArray connections;
@property (nonatomic) <AVCPacketRelayConnectionProtocol> multiplexedConnection;
@property (nonatomic) <AVCPacketRelayDelegate> delegate;
- (id)connections;
- (void)dealloc;
- (void)start;
- (void)setDelegate:;
- (void)stop;
- (void)setConnections:;
- (id)delegate;
- (id)initWithConnections:multiplexedConnection:error:;
- (id)initWithConnection:connection:error:;
- (BOOL)isAllConnectionTypeValid:;
- (int)startAllConnections;
- (BOOL)stopAllConnections;
- (id)findConnectionToForwardData:size:;
- (void)healthPrint:isSend:;
- (void)updateDemuxPacketStatsWithPacketFilterPacketType:;
- (id)multiplexedConnection;
- (void)setMultiplexedConnection:;
@end
