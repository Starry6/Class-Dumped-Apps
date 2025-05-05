@interface SAAppsQuitAllApps : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)quitAllApps;
+ (id)quitAllAppsWithDictionary:context:;
@end
