@interface AWELiveCheckUserOnlineManager : NSObject
@property (nonatomic) AWELiveMgetRoomInfoApi infoApi;
@property (nonatomic) NSMutableDictionary monitorData;
@property (nonatomic) BOOL forceCheck;
- (BOOL)forceCheck;
- (void)setForceCheck:;
- (id)_buildCurrenScene:referString:;
- (id)_buildSceneUIDKey:userID:;
- (void)addFeedReadyNotification;
- (void)p_postUnRead;
- (id)_getListByScene:;
- (id)monitorData;
- (void)_updateRoomInfo:toCenter:;
- (id)_getNeedCheckUserList:toCenter:;
- (id)_getRequestParams:;
- (id)infoApi;
- (void)uploadMonitorEvent;
- (id)roomIdInResponse:ofUserId:andScene:;
- (void)_callMessage:userList:updateCurrent:feedModel:;
- (void)_mgetRoomInfo:infoList:userList:inCenter:currentChange:;
- (id)_getMegetRequestParams:;
- (void)checkRoomInfo:userID:scene:;
- (void)forceToCheckRoomInfo:userID:scene:;
- (void)setInfoApi:;
- (void)setMonitorData:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
