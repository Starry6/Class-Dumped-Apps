@interface BDMannorAdTaskManager : NSObject
+ (void)processWithAdData:appID:preload:creativeID:logExtra:tag:refer:adExtraData:downloadURL:appStoreEnabled:SKANParams:downloadScene:webURL:openURL:complianceData:;
+ (void)processWithAppID:preload:creativeID:logExtra:downloadURL:appStoreEnabled:SKANParams:downloadScene:webURL:openURL:complianceData:;
+ (void)runAppStoreTaskWith:logExtra:;
+ (void)runAppStoreTaskWith:logExtra:adExtraData:refer:tag:;
+ (BOOL)runOpenECommerceWith:logExtra:extra:adExtraData:refer:tag:;
+ (BOOL)runOpenIMWith:logExtra:extra:adExtraData:refer:tag:;
+ (BOOL)runOpenInAppWith:logExtra:extra:adExtraData:refer:tag:;
+ (BOOL)runOpenLiveRoomWith:logExtra:extra:adExtraData:refer:tag:;
+ (BOOL)runOpenLynxWith:logExtra:extra:adExtraData:refer:tag:;
+ (BOOL)runOpenMpURLWith:logExtra:extra:adExtraData:refer:tag:;
+ (void)runOpenURLTaskWith:logExtra:;
+ (void)runOpenURLTaskWith:logExtra:adExtraData:refer:tag:;
+ (BOOL)runOpenURLsWith:logExtra:extra:adExtraData:refer:tag:;
+ (void)runOpenWeChatTaskWith:logExtra:adExtraData:refer:tag:;
+ (void)runTaskWith:logExtra:;
+ (void)runTaskWith:logExtra:adExtraData:refer:tag:;
+ (void)runTaskWith:logExtra:adExtraData:refer:tag:enterLive:;
+ (void)runWebURLTaskWith:logExtra:;
+ (void)runWebURLTaskWith:logExtra:extra:adExtraData:refer:tag:;
@end
