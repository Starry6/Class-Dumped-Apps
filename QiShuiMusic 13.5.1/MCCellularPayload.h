@interface MCCellularPayload : MCPayload
@property (nonatomic) MCAPNConfiguration attachAPN;
@property (nonatomic) NSArray APNs;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)installationWarnings;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)attachAPNConfigurationLabel;
- (id)APNConfigurationDescription;
- (id)APNsLabel;
- (id)APNsDescription;
- (id)attachAPN;
- (void)setAttachAPN:;
- (id)APNs;
- (void)setAPNs:;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
