@interface AWEIMShareContactListSortedRuleInsertListConfigModel : MTLModel
@property (nonatomic) NSNumber order;
@property (nonatomic) NSNumber position;
@property (nonatomic) NSNumber count;
@property (nonatomic) NSString sourceKey;
@property (nonatomic) NSArray filterList;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)filterList;
- (void)setFilterList:;
- (void)setCount:;
- (id)order;
- (id)position;
- (id)count;
- (void).cxx_destruct;
- (void)setOrder:;
- (void)setPosition:;
- (id)copyWithZone:;
- (id)sourceKey;
- (void)setSourceKey:;
+ (id)modelCustomPropertyMapper;
+ (id)filterListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
