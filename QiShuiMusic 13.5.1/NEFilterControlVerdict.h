@interface NEFilterControlVerdict : NEFilterNewFlowVerdict
- (id)init;
- (id)descriptionWithIndent:options:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)allowVerdictWithUpdateRules:;
+ (id)dropVerdictWithUpdateRules:;
+ (id)updateRules;
@end
