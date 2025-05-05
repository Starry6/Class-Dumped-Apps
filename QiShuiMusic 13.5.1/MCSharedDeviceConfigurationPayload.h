@interface MCSharedDeviceConfigurationPayload : MCPayload
@property (nonatomic) NSString lockScreenFootnote;
@property (nonatomic) NSString assetTagInformation;
@property (nonatomic) NSDictionary configuration;
- (id)configuration;
- (void).cxx_destruct;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)lockScreenFootnote;
- (id)assetTagInformation;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
