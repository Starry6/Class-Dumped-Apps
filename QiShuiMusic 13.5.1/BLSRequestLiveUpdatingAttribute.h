@interface BLSRequestLiveUpdatingAttribute : BLSSceneAttribute
- (BOOL)checkEntitlementSourceForRequiredEntitlements:error:;
+ (id)requestLiveUpdatingForScene:;
+ (id)requestLiveUpdatingForFBSScene:;
+ (id)requestLiveUpdatingForFBSSceneIdentityToken:;
@end
