@interface AWDServerConnection : NSObject
- (BOOL)registerQueriableMetricCallback:forIdentifier:;
- (void)dealloc;
- (id)getComponentConfigurationParameters;
- (BOOL)submitMetric:;
- (id)newMetricContainerWithIdentifier:;
- (void)registerComponentParametersChangeCallback:;
- (BOOL)registerConfigChangeCallback:;
- (void)flushToQueue:block:;
- (id)initWithComponentId:;
- (BOOL)registerQueriableMetric:callback:;
- (unsigned long long)getAWDTimestamp;
- (id)initWithComponentId:andBlockOnConfiguration:;
@end
