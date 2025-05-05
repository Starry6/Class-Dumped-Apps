@interface ASDPersonalizationStore : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)recordLaunchesWithCompletionBlock:;
- (id)init;
- (void)flushMetricsWithCompletionBlock:;
- (void)recordMetricsWithCompletionBlock:;
- (void).cxx_destruct;
- (void)reportAppEvent:completionBlock:;
- (void)resetMetricsWithCompletionBlock:;
- (void)getAppEventsWithCompletionBlock:;
- (void)sendMetricsWithCompletionBlock:;
- (void)getGroupingToken:;
- (void)getClusterMappingsWithCompletionBlock:;
- (void)reloadClusterMappingsWithCompletionBlock:;
- (void)resetActorIDWithCompletionBlock:;
- (void)setClusterMapping:completionBlock:;
- (void)setClusterMappings:completionBlock:;
- (void)getTasteProfileToken:;
- (void)tasteProfileFeatureEnabled:;
+ (id)interface;
+ (id)sharedInstance;
@end
