@interface IESLiveSaaSCertifyUnderAgeService : IESLiveSaaSCertifyBaseService
- (id)fetchUnderAgeErrorPrompts:;
- (void)handleCertifyWithParamsModel:withCompleteBlock:;
- (BOOL)needCertifyProcess:;
@end
