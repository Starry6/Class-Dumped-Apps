@interface HMDWebViewMonitor : NSObject
@property (nonatomic) BOOL isMonitoring;
@property (nonatomic) NSObject<OS_dispatch_queue> webviewQueue;
- (void)bdw_URLProtocolTask:didReceiveResponse:;
- (void)bdw_URLSchemeTask:didReceiveResponse:;
- (id)recordWithRequest:response:additionalInfo:netMonitorConfig:;
- (void)setWebviewQueue:;
- (id)webviewQueue;
- (id)init;
- (void)start;
- (void)stop;
- (BOOL)isMonitoring;
- (void).cxx_destruct;
- (void)setIsMonitoring:;
+ (id)sharedMonitor;
@end
