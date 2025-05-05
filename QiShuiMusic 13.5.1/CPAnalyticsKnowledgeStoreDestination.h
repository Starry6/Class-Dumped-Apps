@interface CPAnalyticsKnowledgeStoreDestination : NSObject
@property (nonatomic) NSMutableArray matchers;
@property (nonatomic) <_DKKnowledgeSaving> knowledgeStore;
@property (nonatomic) BOOL disabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithConfig:;
- (id)matchers;
- (id)initWithConfig:cpAnalyticsInstance:;
- (void)processEvent:;
- (id)_datasetSampleFromEvent:andMatcher:;
- (void).cxx_destruct;
- (void)_addCoreDuetDatasetSample:toDataset:;
- (id)knowledgeStore;
@end
