@interface SAUIShowControlCenter : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)showControlCenter;
+ (id)showControlCenterWithDictionary:context:;
@end
