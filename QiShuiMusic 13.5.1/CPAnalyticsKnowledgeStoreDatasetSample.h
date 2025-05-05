@interface CPAnalyticsKnowledgeStoreDatasetSample : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSDate date;
@property (nonatomic) NSString subset;
- (id)metadata;
- (id)identifier;
- (id)date;
- (void).cxx_destruct;
- (id)subset;
- (id)initWithIdentifier:andDate:forSubset:;
@end
