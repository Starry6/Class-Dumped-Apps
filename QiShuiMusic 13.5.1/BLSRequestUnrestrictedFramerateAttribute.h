@interface BLSRequestUnrestrictedFramerateAttribute : BLSSceneAttribute
- (BOOL)checkEntitlementSourceForRequiredEntitlements:error:;
+ (id)requestUnrestrictedFramerateForScene:;
+ (id)requestUnrestrictedFramerateForFBSScene:;
+ (id)requestUnrestrictedFramerateForFBSSceneIdentityToken:;
@end
