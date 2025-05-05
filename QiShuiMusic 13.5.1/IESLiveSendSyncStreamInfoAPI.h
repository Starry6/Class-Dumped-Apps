@interface IESLiveSendSyncStreamInfoAPI : HTSLiveApi
@property (nonatomic) NSNumber roomId;
@property (nonatomic) NSNumber liveId;
@property (nonatomic) q ntpDiffTime;
@property (nonatomic) <IESLiveMessageUplinkService> uplinkService;
- (void)setNtpDiffTime:;
- (id)initWithRoomId:liveId:;
- (id)liveId;
- (long long)ntpDiffTime;
- (void)p_httpRequestWithParameters:callback:;
- (void)p_uplinkRequestWithParameters:callback:;
- (void)requestSyncStreamInfoArray:ntpDiffTime:callback:;
- (id)roomId;
- (void)setLiveId:;
- (void)setRoomId:;
- (void)setUplinkService:;
- (id)uplinkService;
- (void).cxx_destruct;
@end
