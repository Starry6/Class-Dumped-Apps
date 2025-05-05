@interface SALocalSearchShowNavigationDetail : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)showNavigationDetail;
+ (id)showNavigationDetailWithDictionary:context:;
@end
