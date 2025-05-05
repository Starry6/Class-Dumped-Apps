@interface MCTVRemotePayload : MCPayload
@property (nonatomic) NSArray allowedTVIDs;
@property (nonatomic) NSArray allowedTVNames;
@property (nonatomic) NSArray allowedRemotes;
@property (nonatomic) NSArray allowedTVs;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)restrictions;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)allowedTVIDs;
- (id)allowedTVNames;
- (id)allowedRemotes;
- (void)setAllowedRemotes:;
- (id)allowedTVs;
- (void)setAllowedTVs:;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
