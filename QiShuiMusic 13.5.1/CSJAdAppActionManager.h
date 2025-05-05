@interface CSJAdAppActionManager : NSObject
- (BOOL)handleAppWithDownloadUrl:WithSucessCallBack:WithFailedCallback:;
- (long long)p_appstoreJumpTypeWithMaterial:;
- (id)setupUserInfo:tag:needShowTime:;
- (long long)handleActionWithModel:WithSucessCallBack:WithFailedCallback:context:;
- (void)openAppStoreActionTrackWithMaterial:context:notiName:needShowTime:;
- (void)openAppStoreByOpenURLWithMaterial:context:openType:;
- (long long)openAppStoreTypeWithMaterial:;
- (BOOL)openAppStoreWithMaterial:rootViewController:jumpType:context:WithSucessCallBack:WithFailedCallback:;
+ (id)sharedManager;
@end
