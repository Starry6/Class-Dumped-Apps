@interface MCAirPlayPayload : MCPayload
@property (nonatomic) NSArray titlesAndDescriptions;
@property (nonatomic) NSArray allowListDestinations;
@property (nonatomic) NSArray destinationsWithPasswords;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)titlesAndDescriptions;
- (id)allowListDestinations;
- (void)setAllowListDestinations:;
- (id)destinationsWithPasswords;
- (void)setDestinationsWithPasswords:;
- (void)setTitlesAndDescriptions:;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
