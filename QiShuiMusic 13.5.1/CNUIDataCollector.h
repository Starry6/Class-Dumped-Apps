@interface CNUIDataCollector : NSObject
@property (nonatomic) CNMetricsUIReporter metricsReporter;
@property (nonatomic) NSString appIdentifier;
@property (nonatomic) CNUIDataCollectorSGLogger sgLogger;
- (id)appIdentifier;
- (id)init;
- (id)initWithEnvironment:;
- (void).cxx_destruct;
- (void)logContactActionType:attributes:;
- (void)logPresentation;
- (void)logSearchUsage;
- (void)logSearchResultsFetchedSuggested:;
- (void)logSearchResultSelected:;
- (void)logContactShown:;
- (void)logContactCreated:originalContact:;
- (id)metricsReporter;
- (id)sgLogger;
+ (BOOL)isEnabled;
+ (id)sharedCollector;
@end
