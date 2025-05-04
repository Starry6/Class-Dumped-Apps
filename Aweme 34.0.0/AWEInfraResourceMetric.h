@interface AWEInfraResourceMetric : NSObject
@property (nonatomic) <AWEStorageServiceFileKitResourceMetricInterface> resourceMetric;
@property (nonatomic) NSObject<OS_dispatch_queue> metricQueue;
@property (nonatomic) BOOL enableMetric;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)metricQueue;
- (void)setMetricQueue:;
- (void)setResourceMetric:;
- (id)resourceMetric;
- (void)setEnableMetric:;
- (BOOL)enableMetric;
- (void)resourceStateDidChange:eventType:;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
@end
