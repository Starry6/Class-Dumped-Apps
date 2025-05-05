@interface MCAppWhitelistPayloadBase : MCPayload
@property (nonatomic) NSArray whitelistedAppsAndOptions;
@property (nonatomic) BOOL allowAccessWithoutPasscode;
@property (nonatomic) BOOL forceAllowSupervisorAccess;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)restrictions;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)whitelistedAppsAndOptions;
- (void)setWhitelistedAppsAndOptions:;
- (BOOL)allowAccessWithoutPasscode;
- (void)setAllowAccessWithoutPasscode:;
- (BOOL)forceAllowSupervisorAccess;
- (void)setForceAllowSupervisorAccess:;
+ (id)knownOptionsKeys;
+ (id)knownUserEnabledOptionKeys;
@end
