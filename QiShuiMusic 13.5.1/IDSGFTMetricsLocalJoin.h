@interface IDSGFTMetricsLocalJoin : IDSGFTMetricsReferencePoint
@property (nonatomic) BOOL didJoin;
- (void)willSendJoin;
- (void)didSendJoin;
- (void)connectQRServer;
- (void)sendAllocationRequest;
- (void)globalLinkStart;
- (void)willSendAllocbindRequest;
- (void)stunAllocbindRequest;
- (void)stunAllocbindResponse;
- (void)tcpAllocbindRequest;
- (void)tcpAllocbindResponse;
- (void)quicAllocbindRequest;
- (void)quicAllocbindResponse;
- (void)clientChannelConnected;
- (void)didConnectUnderlyingRelayLink;
- (void)didConnectUnderlyingE2ELink;
- (void)firstIncomingPacketTime:forMKI:;
- (void)firstOutgoingPacketTime:forMKI:;
- (void)avcReceiveMKMTime:forMKI:isGeneratedLocally:;
- (void)didCreateMKM:;
- (void)sendMKMToAVC:isGeneratedLocally:;
- (void)join;
- (BOOL)didJoin;
- (void)setDidJoin:;
@end
