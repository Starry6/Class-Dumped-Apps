@interface SALocalSearchShowNavigationOverview : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)showNavigationOverview;
+ (id)showNavigationOverviewWithDictionary:context:;
@end
