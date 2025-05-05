@interface BDXPrefetchConditionModel : MTLModel
@property (nonatomic) Q type;
@property (nonatomic) NSString key;
@property (nonatomic) Q operator;
@property (nonatomic) NSArray value;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)operator;
- (void)setOperator:;
- (id)key;
- (void)setType:;
- (void)setKey:;
- (void)setValue:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)value;
+ (id)operatorJSONTransformer;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
