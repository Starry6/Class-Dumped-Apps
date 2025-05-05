@interface NPTunnelFlowProtocol : NPTunnelFlow
@property (nonatomic) ^{nw_protocol=[16C]^{nw_protocol_identifier}^{nw_protocol_callbacks}^{nw_protocol}^v^{nw_protocol}^v} inputProtocol;
@property (nonatomic) BOOL waitingForOutput;
- (void)disconnect;
- (void).cxx_destruct;
- (BOOL)connect;
- (id)initWithTunnel:appRule:inputProtocol:extraProperties:;
- (void)handleAppData:;
- (BOOL)waitingForOutput;
- (void)sendDataToClient:fromTunnel:;
- (void)closeClientFlowWithError:;
- (BOOL)isClientFlowClosed;
- (void)readDataFromClient;
- (void)handleTunnelReadyForData;
- (void)dropInputProtocol;
- (void)notifyClientConnected;
- (unsigned int)addInputFramesToArray:limitMinimumBytes:limitMaximumBytes:limitMaximumFrames:;
- (BOOL)addBufferToFrameArray:bufferSize:;
- (unsigned int)addOutputFramesToArray:limitMinimumBytes:limitMaximumBytes:limitMaximumFrames:;
- (void)handleOutputFrame:send:;
- (id)inputProtocol;
@end
