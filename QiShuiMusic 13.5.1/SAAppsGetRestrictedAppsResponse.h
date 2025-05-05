@interface SAAppsGetRestrictedAppsResponse : SABaseCommand
@property (nonatomic) NSDictionary appToItsRestrictionsMap;
@property (nonatomic) NSArray restrictedApps;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)appToItsRestrictionsMap;
- (void)setAppToItsRestrictionsMap:;
- (id)restrictedApps;
- (void)setRestrictedApps:;
+ (id)getRestrictedAppsResponse;
+ (id)getRestrictedAppsResponseWithDictionary:context:;
@end
