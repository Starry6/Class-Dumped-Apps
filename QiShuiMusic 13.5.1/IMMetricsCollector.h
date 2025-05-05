@interface IMMetricsCollector : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> metricsQueue;
- (BOOL)trackEvent:;
- (id)metricsQueue;
- (id)init;
- (void)dealloc;
- (BOOL)trackEvent:withCount:;
- (void)setMetricsQueue:;
- (void)forceAutoBugCaptureWithSubType:errorPayload:;
- (void)_trackEvent:withStatistic:;
- (void)_trackEvent:withDictionary:;
- (id)_ADClientAddValueForScalarKeyApiInit;
- (void)trackSpamEvent:withDictionary:;
- (id)_ADClientPushValueForDistributionKeyApiInit;
- (void)_trackEvent:;
- (void)trackSpamEvent:;
- (void)metricAttachmentValidation:attachmentSize:operationalErrorDomain:operationalErrorCode:validationErrorDomain:validationErrorCode:;
- (void)_trackEvent:withCount:;
- (id)_ADClientSetValueForScalarKeyApiInit;
- (id)_stringForSpamType:;
- (BOOL)trackEvent:withStatistic:;
- (BOOL)trackEvent:withDictionary:;
- (void)autoBugCaptureWithSubType:errorPayload:;
+ (id)sharedInstance;
@end
