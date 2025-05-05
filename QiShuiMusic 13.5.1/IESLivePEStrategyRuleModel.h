@interface IESLivePEStrategyRuleModel : IESLiveDynamicMTLModel
@property (nonatomic) NSString expression;
@property (nonatomic) double weight;
@property (nonatomic) double score;
@property (nonatomic) NSString tag;
@property (nonatomic) NSString factor;
@property (nonatomic) BOOL isMultiply;
@property (nonatomic) double plusNum;
@property (nonatomic) double multiplyNum;
@property (nonatomic) double exponentNum;
@property (nonatomic) NSString mappingType;
@property (nonatomic) double pMax;
@property (nonatomic) double pMin;
@property (nonatomic) q execute;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)JSONKeyPathsByPropertyKey;
@end
