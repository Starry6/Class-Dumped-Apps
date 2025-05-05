@interface IESLiveSaaSSendSyncStreamInfoAPI : HTSLiveApi
@property (nonatomic) NSNumber roomId;
@property (nonatomic) NSNumber liveId;
@property (nonatomic) q ntpDiffTime;
- (void)setNtpDiffTime:;
- (id)initWithRoomId:liveId:;
- (id)liveId;
- (long long)ntpDiffTime;
- (id)roomId;
- (void)setLiveId:;
- (void)setRoomId:;
- (void).cxx_destruct;
@end
