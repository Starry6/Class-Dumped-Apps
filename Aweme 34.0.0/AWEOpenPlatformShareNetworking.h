@interface AWEOpenPlatformShareNetworking : NSObject
+ (void)requestAwemeItemWithID:completion:;
+ (void)requestRealUidsWithOpenIDs:appId:clientKey:completion:;
+ (id)getRealUIDWithRealOpenID:clientKey:;
+ (void)saveOrClearRealUID:realOpenID:clientKey:;
+ (BOOL)shouldStorageOpenIDAndUID;
+ (id)generateSkipRequestPermissionResultWithRequestParams:;
+ (void)requestIMShareCheckWithParams:completion:;
+ (void)requestSecUidWithUserOpenId:inviteeOpenId:appId:clientKey:completion:;
+ (void)requestInvokeGameInfoWithParams:completion:;
+ (void)requestInvokeCardTemplateIDInfoWithParams:completion:;
+ (void)requestIronManCardIMInfoWithParams:completion:;
+ (void)requestCheckGameGroupId:completion:;
+ (void)requestIMGameFansEnterCheckWithGroupID:clientKey:openID:completion:;
+ (void)requestOpenShareCheckPermisionWithParams:completion:;
+ (void)getPoiDetail:completion:;
@end
