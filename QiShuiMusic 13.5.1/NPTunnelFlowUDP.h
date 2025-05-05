@interface NPTunnelFlowUDP : NPTunnelFlowProtocol
@property (nonatomic) NSMutableArray savedDirectData;
@property (nonatomic) Q savedDataSize;
@property (nonatomic) NWUDPSession directSession;
@property (nonatomic) NSDate firstPacketDate;
@property (nonatomic) NWEndpoint remoteEndpoint;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id)remoteEndpoint;
- (id)initWithTunnel:appRule:inputProtocol:extraProperties:;
- (void)handleAppData:;
- (void)startDirectConnection;
- (void)stopDirectConnection;
- (void)handleIncomingData:andError:;
- (void)startHandlingIncomingData;
- (void)sendDataOnDirectSession:;
- (id)savedDirectData;
- (void)setSavedDirectData:;
- (unsigned long long)savedDataSize;
- (void)setSavedDataSize:;
- (id)directSession;
- (void)setDirectSession:;
- (id)firstPacketDate;
- (void)setFirstPacketDate:;
@end
