@interface PTProxySettings : PTSettings
@property (nonatomic) PTProxySettingsDefinition definition;
- (id)definition;
- (id)_initWithDefinition:;
- (id)valueForKey:;
- (void)restoreDefaultValues;
- (id)init;
- (void)setValue:forKey:;
- (id)module;
- (id)initWithDefaultValues;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)restoreFromArchiveDictionary:;
- (id)_createChildForKey:;
+ (id)new;
+ (id)settingsFromArchiveDictionary:;
+ (id)proxyWithDefinition:;
+ (id)settingsOrProxyWithDefinition:;
@end
