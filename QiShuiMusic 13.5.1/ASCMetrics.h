@interface ASCMetrics : NSObject
@property (nonatomic) <ASCServices> connection;
@property (nonatomic) ASCPendingPromises pendingProcesses;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (id)initWithConnection:;
- (void)daemonConnectionWasLost:;
- (id)processMetricsData:pageFields:activity:;
- (id)recordCampaignToken:providerToken:withLockup:;
- (id)recordQToken:campaignToken:advertisementID:withLockup:;
- (id)processMetricsData:withActivity:;
- (id)processViewMetrics:atInvocationPoint:withActivity:;
- (id)processViewRenderWithPredicate:;
- (void)logErrorMessage:;
- (id)pendingProcesses;
+ (id)sharedMetrics;
@end
