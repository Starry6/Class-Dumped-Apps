@interface LAAuthenticationRequirement : NSObject
- (id)init;
- (id)key;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)encodeWithACLCoder:;
- (id)requirementByAddingExtendedRequirement:;
+ (id)defaultRequirement;
+ (id)biometryRequirement;
+ (id)biometryCurrentSetRequirement;
+ (id)biometryRequirementWithFallback:;
+ (id)biometryCurrentSetRequirementWithFallback:;
+ (id)biometryRefreshableSetRequirementWithFallback:;
@end
