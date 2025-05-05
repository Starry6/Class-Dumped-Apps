@interface NPTunnelTuscanyLoopback : NPTunnelTuscany
@property (nonatomic) ^v window;
@property (nonatomic) NPTunnelFlow flow;
- (void)write:;
- (unsigned long long)initialWindowSize;
- (void)dealloc;
- (void).cxx_destruct;
- (void)removeFlow:;
- (void)setWindow:;
- (id)window;
- (id)flow;
- (void)setFlow:;
- (id)initWithEndpoint:parameters:appRule:flowProperties:onRamp:delegate:;
- (BOOL)addNewFlow:;
- (void)createTuscanyClient;
- (unsigned int)dayPassSessionCounter;
- (unsigned long long)maxFrameSize;
- (long long)currentMTU;
- (BOOL)selectBestEdge;
- (void)startConnectionTimer;
- (void)cancelConnectionTimer;
- (void)cancelConnection;
- (void)sendUsageReportWithRTT:geohash:fallbackReason:;
- (void)pingWithCompletionHandler:;
@end
