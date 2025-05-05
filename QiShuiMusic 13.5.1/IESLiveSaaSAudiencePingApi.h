@interface IESLiveSaaSAudiencePingApi : HTSLiveApi
@property (nonatomic) NSNumber roomID;
@property (nonatomic) Q audiencePingInterval;
@property (nonatomic) BOOL closed;
@property (nonatomic) <HTSLiveSaaSAudiencePingApiDelegate> delegate;
- (id)initWithRoomID:;
- (unsigned long long)audiencePingInterval;
- (void)setAudiencePingInterval:;
- (void)startAudiencePing;
- (void)startAudiencePingImmediately:;
- (void)stopAudiencePing;
- (void)setClosed:;
- (void)setDelegate:;
- (void)request;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)closed;
- (id)roomID;
- (void)setRoomID:;
@end
