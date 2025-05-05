@interface IESLiveSaaSVerify : NSObject
@property (nonatomic) HTSLiveApi clientApi;
@property (nonatomic) IESLiveSaaSVerifyApi verifyApi;
@property (nonatomic) <IESLiveSaaSVerifyConfig> verifyConfig;
- (void)checkVerfyWithType:businessParamsBlock:completion:;
- (id)clientApi;
- (void)getLiveCertificationStatusWithCompletion:;
- (void)p_requestVerifyResultWithBusinessParamsBlock:completion:;
- (void)setClientApi:;
- (void)setVerifyApi:;
- (void)setVerifyConfig:;
- (id)verifyApi;
- (id)verifyConfig;
- (void).cxx_destruct;
@end
