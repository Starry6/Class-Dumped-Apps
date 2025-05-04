@interface AWEMVChannelAutoRetryCoverManager : NSObject
@property (nonatomic) AWEMVChannelPageContext context;
@property (nonatomic) BOOL isMonitoring;
- (void)registerNotification;
- (void)handleNetworkingReachabilityDidChangeNotification:;
- (void)dealloc;
- (id)initWithContext:;
- (BOOL)isMonitoring;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setIsMonitoring:;
- (void)startMonitor;
- (void)stopMonitor;
@end
