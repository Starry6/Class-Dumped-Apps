@interface CPAnalyticsCoreDuetEventMatcher : CPAnalyticsEventMatcher
@property (nonatomic) NSString datasetName;
@property (nonatomic) NSString identifierPropertyName;
@property (nonatomic) NSString subsetPropertyName;
@property (nonatomic) NSObject subsetPropertyValue;
@property (nonatomic) BOOL matchNextEvent;
- (id)init;
- (id)datasetName;
- (id)initWithConfig:;
- (BOOL)matchNextEvent;
- (BOOL)doesMatch:;
- (id)subsetPropertyValue;
- (void).cxx_destruct;
- (id)identifierPropertyName;
- (id)subsetPropertyName;
@end
