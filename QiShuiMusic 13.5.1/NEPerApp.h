@interface NEPerApp : NSObject
@property (nonatomic) NSArray appRules;
@property (nonatomic) BOOL noRestriction;
@property (nonatomic) BOOL restrictDomains;
@property (nonatomic) NSArray excludedDomains;
- (BOOL)noRestriction;
- (BOOL)checkValidityAndCollectErrors:;
- (void)setNoRestriction:;
- (id)init;
- (id)descriptionWithIndent:options:;
- (void)setAppRules:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)appRules;
- (void)setExcludedDomains:;
- (void)setRestrictDomains:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)excludedDomains;
- (id)copyAppRuleByID:;
- (id)copyAppRuleBySigningIdentifier:;
- (BOOL)removeAppRuleByID:;
- (id)copyAppRuleIDs;
- (void)updateAppRulesForUID:;
- (BOOL)restrictDomains;
- (id)copyCachedMachOUUIDs;
+ (BOOL)supportsSecureCoding;
@end
