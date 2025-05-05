@interface IESLiveSaaSCertifyBaseService : NSObject
@property (nonatomic) IESLiveCustomRequestModel paramsModel;
@property (nonatomic) BOOL isRechargeCertify;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setParamsModel:;
- (void)showFailMessage:withCompletion:;
- (id)trackDictionary;
- (id)attachingDIContext;
- (void)handleCertifyWithParamsModel:withCompleteBlock:;
- (id)handleError:withExtraString:;
- (BOOL)isCertifyForRecharge:;
- (BOOL)isRechargeCertify;
- (BOOL)needCertifyProcess:;
- (id)paramsModel;
- (void)setIsRechargeCertify:;
- (void).cxx_destruct;
@end
