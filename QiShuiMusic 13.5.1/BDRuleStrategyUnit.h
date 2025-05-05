@interface BDRuleStrategyUnit : BDPolicyStrategyUnit
- (id)convertCertUnitToParams:;
- (BOOL)isMarkResult:;
- (BOOL)isValidResult:;
- (id)result:withExtraInfo:;
- (id)validateCertUnit:;
@end
