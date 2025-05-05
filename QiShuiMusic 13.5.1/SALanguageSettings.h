@interface SALanguageSettings : SABaseClientBoundCommand
@property (nonatomic) NSDictionary configuredLocales;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)configuredLocales;
- (void)setConfiguredLocales:;
+ (id)languageSettings;
+ (id)languageSettingsWithDictionary:context:;
@end
