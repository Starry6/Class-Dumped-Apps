@interface AWEOpenPlatformLocalScopesManager : NSObject
+ (id)allLocalScopes;
+ (void)authScope:forClientKey:;
+ (BOOL)checkScope:validPeriod:forClientKey:;
+ (void)reomoveScope:forClientKey:;
+ (long long)getValidPeriodFromSettings;
+ (id)fetchValidPermissionsForCurrentUserWithClientKey:validPeriod:;
+ (id)storageKeyForClientKey:;
@end
