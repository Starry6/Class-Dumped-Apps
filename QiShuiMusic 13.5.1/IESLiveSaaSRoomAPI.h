@interface IESLiveSaaSRoomAPI : HTSLiveApi
@property (nonatomic) <IESLiveSaaSTimeService> timeService;
@property (nonatomic) NSNumber roomID;
- (id)initWithRoomID:;
- (void)setTimeService:;
- (void)checkIsAweme:enterFromMerge:enterMethod:finished:;
- (void)closeAbnormalAnchorRoomFinished:;
- (void)enterRoomWithLogin:roomModel:sourcePage:finish:;
- (void)enterRoomWithRequestModel:finish:;
- (void)exitRoom:;
- (void)fetchRoomInfo:roomList:scene:completion:;
- (void)fetchRoomInfoByScene:roomID:completion:;
- (void)fetchRoomInfoWithID:atPackLevel:scene:finished:;
- (void)fetchRoomInfoWithID:openRoomID:atPackLevel:scene:finished:;
- (void)fetchRoomInfoWithRoomID:scene:completion:;
- (void)fetchRoomInfoWithTimeStampByScene:finished:;
- (void)fetchRoomInfoWithUserID:unionID:scene:completion:;
- (void)p_preCreateMixRoomIfNeed:roomJson:;
- (id)timeService;
- (void).cxx_destruct;
- (id)roomID;
@end
