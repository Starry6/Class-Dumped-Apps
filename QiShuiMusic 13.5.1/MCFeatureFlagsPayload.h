@interface MCFeatureFlagsPayload : MCPayload
@property (nonatomic) NSDictionary featureFlagsConfiguration;
@property (nonatomic) Q featureFlagCount;
@property (nonatomic) Q disclosureCount;
- (id)title;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (BOOL)isAllowedToWriteFeatureFlags;
- (id)invalidConfigurationErrorWithUnderlyingError:;
- (id)featureFlagsConfiguration;
- (unsigned long long)featureFlagCount;
- (unsigned long long)disclosureCount;
+ (BOOL)isConfigurationValid:error:;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
