@interface IESLiveSaaSCertifyFullAuthService : IESLiveSaaSCertifyBaseService
- (void)alertActionTrack:;
- (void)arouseCertifyProcessWithError:withCompleteBlock:;
- (void)arouseNewCertifyProcessWithError:scene:flow:ticket:completionBlock:;
- (void)handleCertifyWithParamsModel:withCompleteBlock:;
- (void)handleVerifyResult:withError:;
- (BOOL)needCertifyProcess:;
@end
