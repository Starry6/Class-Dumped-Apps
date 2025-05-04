@interface AWEIMShareContactListSortedRuleBasicListConfigModel : MTLModel
@property (nonatomic) NSNumber order;
@property (nonatomic) NSNumber count;
@property (nonatomic) NSString sourceKey;
@property (nonatomic) AWEIMShareContactListSortedRuleConfigModel nestedSource;
@property (nonatomic) NSArray filterList;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)filterList;
- (id)nestedSource;
- (void)setFilterList:;
- (void)setNestedSource:;
- (void)setCount:;
- (id)order;
- (id)count;
- (void).cxx_destruct;
- (void)setOrder:;
- (id)copyWithZone:;
- (id)sourceKey;
- (void)setSourceKey:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)filterListJSONTransformer;
+ (id)nestedSourceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
