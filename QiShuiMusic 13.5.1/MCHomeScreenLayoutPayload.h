@interface MCHomeScreenLayoutPayload : MCPayload
@property (nonatomic) NSArray layout;
- (void)setLayout:;
- (id)layout;
- (void).cxx_destruct;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)parseIconsArray:allowFolders:outError:;
- (id)payloadDescriptionKeyValueSections;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
