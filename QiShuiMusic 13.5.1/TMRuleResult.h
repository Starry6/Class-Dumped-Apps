@interface TMRuleResult : NSObject
@property (nonatomic) NSString signature;
@property (nonatomic) NSString scene;
@property (nonatomic) NSArray ruleSetNames;
@property (nonatomic) NSDictionary usedParameters;
@property (nonatomic) NSArray values;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ruleSetNames;
- (void)setRuleSetNames:;
- (void)setUsedParameters:;
- (id)usedParameters;
- (void)setSignature:;
- (id)signature;
- (void)setScene:;
- (id)values;
- (id)scene;
- (void).cxx_destruct;
- (void)setValues:;
@end
