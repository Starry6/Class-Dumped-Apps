@interface NPTunnelFlowHTTP : NPTunnelFlow
@property (nonatomic) @? postCompletionHandler;
@property (nonatomic) BOOL receivedHeaders;
@property (nonatomic) NSNumber responseContentLength;
@property (nonatomic) BOOL responseSuccess;
@property (nonatomic) NSMutableData responseData;
@property (nonatomic) NSURL url;
- (void)setResponseData:;
- (id)url;
- (id)responseData;
- (void)setUrl:;
- (void).cxx_destruct;
- (BOOL)responseSuccess;
- (void)sendDataToClient:fromTunnel:;
- (id)initWithTunnel:URL:extraFlowProperties:;
- (void)postData:withCompletionHandler:;
- (void)closeClientFlowWithError:;
- (BOOL)isClientFlowClosed;
- (id)postCompletionHandler;
- (void)setPostCompletionHandler:;
- (BOOL)receivedHeaders;
- (void)setReceivedHeaders:;
- (id)responseContentLength;
- (void)setResponseContentLength:;
- (void)setResponseSuccess:;
@end
