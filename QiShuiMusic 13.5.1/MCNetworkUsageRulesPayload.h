@interface MCNetworkUsageRulesPayload : MCPayload
@property (nonatomic) NSArray applicationRules;
@property (nonatomic) NSArray SIMRules;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)installationWarnings;
- (id)applicationRules;
- (void)setApplicationRules:;
- (id)SIMRules;
- (void)setSIMRules:;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
