@interface GEOThrottlerAnalyticsFormatter : NSObject
- (id)init;
- (BOOL)hasThrottledInfoForKeyPath:;
- (int)throttleModeForString:;
- (int)networkServiceForRequestKind:;
- (void)captureThrottledReqsForKeyPath:maxReqCount:policyTimeWindow:;
- (void)addThrottledReqForKeyPath:at:;
- (int)throttleTypeForString:;
- (void)setRequestInfoForKeyPath:at:kind:appId:;
- (void).cxx_destruct;
- (BOOL)hasInitialInfoForKeyPath:;
+ (id)sharedThrottlerFormatter;
@end
