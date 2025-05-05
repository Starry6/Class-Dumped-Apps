@interface BWCameraStreamingMonitor : NSObject
- (id)initWithMediaStatusDomainPublisher:msnReportingEnabled:systemStatusReportingEnabled:privacyAccountingAccessLogger:;
- (void)dealloc;
- (void)setStreaming:deviceType:portType:clientAuditToken:tccIdentity:completionHandler:;
- (void)setCameraAccess:deviceType:clientAuditToken:tccIdentity:completionHandler:;
+ (id)sharedCameraStreamingMonitor;
@end
