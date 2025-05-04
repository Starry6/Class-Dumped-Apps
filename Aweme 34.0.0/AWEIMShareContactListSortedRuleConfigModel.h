@interface AWEIMShareContactListSortedRuleConfigModel : MTLModel
@property (nonatomic) NSString configName;
@property (nonatomic) NSNumber maxLength;
@property (nonatomic) NSArray basicList;
@property (nonatomic) NSArray insertList;
@property (nonatomic) NSString resortRule;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)insertList;
- (id)basicList;
- (void)setInsertList:;
- (void)setResortRule:;
- (void)setBasicList:;
- (id)resortRule;
- (id)maxLength;
- (void).cxx_destruct;
- (void)setMaxLength:;
- (id)copyWithZone:;
- (id)configName;
- (void)setConfigName:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)basicListJSONTransformer;
+ (id)insertListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
