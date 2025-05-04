@interface AWESearchFPSStatisticsUtil : NSObject
@property (nonatomic) NSMutableDictionary sessions;
- (id)p_buildSessionForScene:fakeScene:;
- (void)p_removeSessionForScene:;
- (id)sessions;
- (id)init;
- (void).cxx_destruct;
- (void)setSessions:;
+ (void)startScrollFpsMonitorWithScene:;
+ (void)endScrollFpsMonitorWithScene:extraData:;
+ (id)p_getFakeSceneWithValidScene:;
+ (void)p_handleFakeSceneEnd:extraData:;
+ (id)p_generateParamsWithFpsData:andExtraData:;
+ (id)p_getValidSceneWithFakeScene:sceneHasSuffix:;
+ (BOOL)p_sendSuffixSceneEvent;
+ (void)p_sendEventWithOriginParams:andScene:;
+ (BOOL)p_sendNonSuffixSceneEvent;
+ (BOOL)p_switchFpsAndDrop3ToV2;
+ (id)sortTagsInfo:;
+ (id)sharedUtil;
@end
