@interface CPAnalyticsLogEventMatcher : CPAnalyticsEventMatcher
@property (nonatomic) NSString eventTypeLabel;
@property (nonatomic) BOOL shouldLogEventName;
@property (nonatomic) NSArray eventPropertiesToLog;
@property (nonatomic) NSArray eventPublicPropertiesToLog;
- (id)init;
- (BOOL)shouldLogEventName;
- (id)eventPublicPropertiesToLog;
- (id)initWithConfig:;
- (id)eventTypeLabel;
- (id)eventPropertiesToLog;
- (BOOL)doesMatch:;
- (void).cxx_destruct;
@end
