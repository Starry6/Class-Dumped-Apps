@interface AWEPOIParamsRuleParamConfig : MTLModel
@property (nonatomic) NSString logic;
@property (nonatomic) NSArray paramPredicates;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)paramPredicates;
- (id)logic;
- (void)setLogic:;
- (void)setParamPredicates:;
- (void).cxx_destruct;
+ (id)paramPredicatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
