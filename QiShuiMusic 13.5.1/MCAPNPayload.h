@interface MCAPNPayload : MCPayload
@property (nonatomic) BOOL wasInstalled;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)_validationErrorType:forInvalidKey:;
- (BOOL)_checkForValidContents:outError:;
- (void)_finishInitializationWithContents:;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)apnDefaults;
- (id)_strippedAPNDefaults;
- (BOOL)wasInstalled;
- (void)setWasInstalled:;
+ (id)apnDomainName;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
