@interface MCDomainsPayload : MCPayload
@property (nonatomic) NSDictionary restrictions;
- (void).cxx_destruct;
- (id)restrictions;
- (void)setRestrictions:;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
+ (id)typeStrings;
+ (id)invalidDomainPatternErrorWithPattern:;
+ (id)localizedPluralForm;
+ (BOOL)isPatternValid:outError:;
+ (id)localizedSingularForm;
@end
