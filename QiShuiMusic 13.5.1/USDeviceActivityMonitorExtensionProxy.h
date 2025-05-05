@interface USDeviceActivityMonitorExtensionProxy : NSObject
@property (nonatomic) NSArray extensions;
@property (nonatomic) NSObject<OS_dispatch_queue_global> timeoutQueue;
@property (nonatomic) Q timeoutInSeconds;
@property (nonatomic) Q timeoutLeewayInSeconds;
- (id)extensions;
- (unsigned long long)timeoutInSeconds;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:error:;
- (void)setTimeoutInSeconds:;
- (void)_cancelTimer:;
- (void)intervalDidStartForActivity:replyHandler:;
- (void)intervalDidEndForActivity:replyHandler:;
- (void)eventDidReachThreshold:activity:replyHandler:;
- (void)intervalWillStartWarningForActivity:replyHandler:;
- (void)intervalWillEndWarningForActivity:replyHandler:;
- (void)eventWillReachThresholdWarning:activity:replyHandler:;
- (id)initWithClientIdentifier:error:;
- (id)initWithExtensionsMatchingAttributes:error:;
- (void)_requestExtensionVendorProxyForExtension:proxyHandler:;
- (id)_scheduleTimerWithIntervalInSeconds:leewayInSeconds:extensionPID:handler:;
- (id)_scheduleTimerWithIntervalInSeconds:leewayInSeconds:handler:;
- (unsigned long long)timeoutLeewayInSeconds;
- (void)setTimeoutLeewayInSeconds:;
- (id)timeoutQueue;
@end
