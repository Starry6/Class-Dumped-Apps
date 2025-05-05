@interface SACheckAuthenticationRequirement : SABaseClientBoundCommand
@property (nonatomic) NSArray restrictionsOnCompanion;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)restrictionsOnCompanion;
- (void)setRestrictionsOnCompanion:;
+ (id)checkAuthenticationRequirement;
+ (id)checkAuthenticationRequirementWithDictionary:context:;
@end
