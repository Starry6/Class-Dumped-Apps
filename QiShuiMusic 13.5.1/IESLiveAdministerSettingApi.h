@interface IESLiveAdministerSettingApi : HTSLiveApi
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSString administerID;
- (id)initWithRoomID:;
- (id)administerID;
- (void)fetchRoomInfoForDanmukuWithCompletion:;
- (void)fetchUseInfoWithTargetUid:secTargetUid:completion:;
- (void)setAdministerID:;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:;
@end
