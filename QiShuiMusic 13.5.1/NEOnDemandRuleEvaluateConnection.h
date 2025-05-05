@interface NEOnDemandRuleEvaluateConnection : NEOnDemandRule
@property (nonatomic) NSArray connectionRules;
- (BOOL)checkValidityAndCollectErrors:;
- (id)initFromLegacyDictionary:;
- (id)init;
- (id)descriptionWithIndent:options:;
- (id)copyLegacyDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)connectionRules;
- (void)setConnectionRules:;
+ (BOOL)supportsSecureCoding;
@end
