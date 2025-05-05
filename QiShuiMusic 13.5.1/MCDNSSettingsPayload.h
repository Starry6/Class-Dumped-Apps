@interface MCDNSSettingsPayload : MCPayload
@property (nonatomic) NSDictionary configurationDictionary;
@property (nonatomic) NSDictionary dnsSettings;
@property (nonatomic) NSArray onDemandRules;
@property (nonatomic) NSNumber prohibitDisablement;
- (id)dnsSettings;
- (id)configurationDictionary;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)onDemandRules;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)installationWarnings;
- (id)prohibitDisablement;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
