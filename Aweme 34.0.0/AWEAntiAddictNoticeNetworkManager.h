@interface AWEAntiAddictNoticeNetworkManager : NSObject
+ (void)fetchUserAntiAddictNoticeSettingSceneType:;
+ (void)updateUserAntiAddictNoticeSetting:type:completion:;
+ (void)fetchUserAntiAddictNoticeSettingSceneType:sceneTypeString:needRetry:completion:;
+ (void)trackSLOBeginWithRetry:;
+ (void)trackSLOEndWithError:model:extra:;
+ (BOOL)isSameUserID:loginEndUserID:;
+ (void)cacheElderModePopupModelImage:;
+ (void)fetchUserAntiAddictNoticeSettingSceneType:sceneTypeString:completionBlock:;
+ (id)getSceneTypeString:;
@end
