@interface NEFilterRemediationVerdict : NEFilterVerdict
- (long long)filterAction;
+ (id)needRulesVerdict;
+ (id)allowVerdict;
+ (id)dropVerdict;
@end
