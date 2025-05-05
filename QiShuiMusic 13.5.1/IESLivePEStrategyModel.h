@interface IESLivePEStrategyModel : IESLiveDynamicMTLModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString type;
@property (nonatomic) NSArray factorKeys;
@property (nonatomic) NSArray rules;
@property (nonatomic) NSArray results;
@property (nonatomic) q defaultResult;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)resultsJSONTransformer;
+ (id)rulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
