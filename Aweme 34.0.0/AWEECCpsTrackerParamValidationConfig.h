@interface AWEECCpsTrackerParamValidationConfig : MTLModel
@property (nonatomic) NSString checkType;
@property (nonatomic) NSString regex;
@property (nonatomic) NSArray length;
@property (nonatomic) NSArray ruleEnum;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ruleEnum;
- (void)setRuleEnum:;
- (void)setLength:;
- (id)regex;
- (id)length;
- (void)setRegex:;
- (void).cxx_destruct;
- (id)checkType;
- (void)setCheckType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
