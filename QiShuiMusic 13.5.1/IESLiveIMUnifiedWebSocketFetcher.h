@interface IESLiveIMUnifiedWebSocketFetcher : IESLiveIMWebSocketFetcher
@property (nonatomic) double startConnectTime;
@property (nonatomic) BOOL isConnectting;
@property (nonatomic) BOOL isTimeout;
@property (nonatomic) @? registeredBusinessArray;
- (void)asyncAckWithPacket:;
- (void)checkConnectState;
- (id)customDataWithKey:value:;
- (void)fetchWithContext:state:data:;
- (id)getAckParamsFromPacket:;
- (BOOL)isConnectting;
- (void)onConnectionStateChanged:connectionState:url:;
- (void)onFrontierMessageReceived:message:;
- (id)registeredBusinessArray;
- (void)setIsConnectting:;
- (void)setRegisteredBusinessArray:;
- (void)setStartConnectTime:;
- (double)startConnectTime;
- (void)trackUnifiedWsConnectStatus:;
- (void).cxx_destruct;
- (void)setIsTimeout:;
- (BOOL)isTimeout;
@end
