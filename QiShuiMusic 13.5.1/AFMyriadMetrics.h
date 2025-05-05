@interface AFMyriadMetrics : NSObject
- (id)_getRequestType:;
- (int)_getCDASchemaCDATriggerType:;
- (unsigned int)getVersion:;
- (double)getSessionId:;
- (BOOL)isMyriadMetricsMessage:;
- (id)getCDASessionId:;
- (id)_createEndAnalyticContexFromIntermediateContext:forVersion:sessionId:;
- (void)_submitMyriadMetrics:additionalContext:toStream:instrumentation:completion:;
- (void)_decisionMadeContext:additionalContext:instrumentation:completion:;
- (void)submitAccessoryMyriadMetricsToAnalyticsStream:payload:instrumentation:completion:;
- (void)submitAccessoryMyriadMetricsToAnalyticsStream:payload:additionalContext:instrumentation:completion:;
- (void)submitMyriadMetricsToAnalyticsStream:context:forEvent:contextNoCopy:;
+ (id)sharedInstance;
@end
