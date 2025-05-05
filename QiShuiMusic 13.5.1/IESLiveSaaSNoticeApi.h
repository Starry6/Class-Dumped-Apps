@interface IESLiveSaaSNoticeApi : HTSLiveApi
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
- (void)getLatestBanRecordWithBanType:finished:;
- (void)postTimeLimitBlockFinishedWithKey:;
- (id)roomModel;
- (void)sendDeblockMessage;
- (void)setRoomModel:;
- (void).cxx_destruct;
- (id)initWithRoom:;
@end
