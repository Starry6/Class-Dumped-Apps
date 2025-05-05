@interface SiriAnalyticsInternalTelemetry : NSObject
- (void)trackEventEmitted:;
- (void)trackMessageStreamProcessed:timeToFirstMessage:messageCount:processingReason:failureReason:;
- (void)trackLogicalClock:;
- (void)_trackLogicalClock:isDerivativeClock:;
- (void)trackEmittedEvents:;
@end
