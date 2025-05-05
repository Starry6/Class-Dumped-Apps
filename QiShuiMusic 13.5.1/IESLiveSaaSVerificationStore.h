@interface IESLiveSaaSVerificationStore : NSObject
@property (nonatomic) IESLiveSaaSVerificationApi verificationApi;
@property (nonatomic) <IESLiveSaaSVerificationProvider> verifyProvider;
@property (nonatomic) NSTimer verificationTimer;
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
- (id)verificationApi;
- (void)clearVerificationTimer;
- (void)handleVerificationCodeMessage:;
- (void)handleVerifyDecisionMessage:;
- (id)initWithRoomModel:;
- (id)liveTypeTrackStringWithRoomScene:;
- (void)popPictureVerifyViewWithMessage:codeType:;
- (void)reportVerificationNoticeTrack;
- (void)requestIdentifyCodeWithCompletion:;
- (void)requestIdentifyStatus:withVerificationId:msgId:;
- (id)roomModel;
- (void)setRoomModel:;
- (void)setVerificationApi:;
- (void)setVerificationTimer:;
- (void)setVerifyProvider:;
- (void)startVerificationTimerWithDuration:;
- (void)trackManMachineCheckResultWithReason:status:;
- (void)trackManMachineCheckShowWithReason:;
- (id)verificationTimer;
- (id)verifyProvider;
- (void)dealloc;
- (void).cxx_destruct;
@end
