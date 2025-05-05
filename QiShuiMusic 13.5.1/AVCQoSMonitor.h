@interface AVCQoSMonitor : NSObject
@property (nonatomic) <AVCQoSMonitorDelegate> delegate;
@property (nonatomic) NSArray streamTokens;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void)registerBlocksForNotifications;
- (void)deregisterBlocksForNotifications;
- (id)streamTokens;
- (void)terminateConnection;
- (id)initWithStreamToken:queue:error:;
- (void)requestQoSReport;
- (id)registerStreamToken:;
- (long long)reportingIntervalForStreamToken:;
- (BOOL)generateInvalidStreamTokenWithError:;
@end
