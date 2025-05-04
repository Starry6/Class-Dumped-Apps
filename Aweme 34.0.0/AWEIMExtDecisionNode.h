@interface AWEIMExtDecisionNode : MTLModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString predicate;
@property (nonatomic) NSString key;
@property (nonatomic) NSString predicateValue;
@property (nonatomic) NSArray predicateValues;
@property (nonatomic) NSArray subValues;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)predicateValue;
- (void)setPredicateValue:;
- (id)predicateValues;
- (void)setPredicateValues:;
- (id)subValues;
- (void)setSubValues:;
- (id)predicate;
- (void)setPredicate:;
- (void)setKey:;
- (id)key;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)subValuesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
