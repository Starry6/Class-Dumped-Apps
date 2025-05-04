@interface AWEPOIParamsRuleModel : MTLModel
@property (nonatomic) NSArray rules;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rules;
- (void)setRules:;
- (void).cxx_destruct;
+ (id)rulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
