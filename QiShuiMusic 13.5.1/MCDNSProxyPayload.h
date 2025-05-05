@interface MCDNSProxyPayload : MCPayload
@property (nonatomic) NSDictionary configurationDictionary;
@property (nonatomic) NSString appBundleIdentifier;
@property (nonatomic) NSString providerBundleIdentifier;
@property (nonatomic) NSDictionary providerConfiguration;
@property (nonatomic) NSString dnsProxyUUID;
- (id)configurationDictionary;
- (id)providerConfiguration;
- (id)appBundleIdentifier;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)providerBundleIdentifier;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)installationWarnings;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)dnsProxyUUID;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
