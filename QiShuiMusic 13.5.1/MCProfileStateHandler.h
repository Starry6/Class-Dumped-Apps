@interface MCProfileStateHandler : MCStateHandler
+ (void)addProfileSettingsStateHandler;
+ (void)addProfileRestrictionsStateHandler;
+ (id)settingsStateDictionaryWithDetailsIncluded:;
+ (id)restrictionsStateDictionaryWithDetailsIncluded:;
@end
