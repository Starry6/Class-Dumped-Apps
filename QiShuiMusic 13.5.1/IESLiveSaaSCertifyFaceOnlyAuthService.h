@interface IESLiveSaaSCertifyFaceOnlyAuthService : IESLiveSaaSCertifyBaseService
- (void)addNotification;
- (void)alertActionTrack:;
- (void)arouseCertifyProcessWithError:withCompleteBlock:;
- (void)arouseNewCertifyProcessWithError:scene:flow:ticket:completionBlock:;
- (void)certifyNotification:;
- (void)certifyResultTrack:isMinor:;
- (void)handleCertifyWithParamsModel:withCompleteBlock:;
- (BOOL)needCertifyProcess:;
- (void)removeNotification;
- (id)init;
- (void)dealloc;
@end
