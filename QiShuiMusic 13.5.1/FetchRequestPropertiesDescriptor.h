@interface FetchRequestPropertiesDescriptor : NSCoder
@property (nonatomic) NSArray groupByProperties;
@property (nonatomic) NSArray aggregateProperties;
@property (nonatomic) NSArray fetchProperties;
- (id)groupByProperties;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)fetchProperties;
- (void)addGroupByProperty:;
- (void)addFetchProperty:;
- (void)addAggregateProperty:;
- (id)initWithCoder:GroupByProperties:aggregateProperties:fetchProperties:;
- (id)aggregateProperties;
+ (BOOL)supportsSecureCoding;
@end
