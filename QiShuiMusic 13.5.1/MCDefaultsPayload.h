@interface MCDefaultsPayload : MCPayload
- (id)title;
- (void).cxx_destruct;
- (id)domains;
- (id)verboseDescription;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (BOOL)isAllowedToWriteDefaults;
- (id)defaultsForDomain:;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
