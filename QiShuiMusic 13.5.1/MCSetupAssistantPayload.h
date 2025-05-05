@interface MCSetupAssistantPayload : MCPayload
@property (nonatomic) NSDictionary configuration;
@property (nonatomic) NSArray skipKeys;
- (id)configuration;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)skipKeys;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
