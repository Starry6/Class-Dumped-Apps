@interface ASDOcelotStore : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)recordLaunchesWithCompletionBlock:;
- (void)sendSummaryWithCompletionBlock:;
- (id)init;
- (void)flushMetricsWithCompletionBlock:;
- (void)recordMetricsWithCompletionBlock:;
- (void)sendPayoutWithCompletionBlock:;
- (void)resetSummaryWithCompletionBlock:;
- (void)sbsyncIfSubscribedWithAccount:completionBlock:;
- (void)subscriptionDetailsWithCompletionBlock:;
- (void)resetPayoutWithCompletionBlock:;
- (void)sbsyncWithDuration:completionBlock:;
- (void)sbsyncWithCompletionBlock:;
- (void)topAppsForAccount:completionBlock:;
- (void)subscriptionStateWithCompletionBlock:;
- (void).cxx_destruct;
- (void)getAppPayoutEventsWithCompletionBlock:;
- (void)getAppSummaryEventsWithCompletionBlock:;
- (void)reportAppEvent:completionBlock:;
+ (id)interface;
@end
