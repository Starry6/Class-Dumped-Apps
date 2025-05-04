@interface AWEUserAccountSettingServiceImp : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)resetPassword;
+ (void)resetPassword:;
+ (void)resetPasswordCompletion:;
+ (void)rebindPhone:;
+ (void)rebindSafePhone:;
+ (void)rebindBusinessAccountPhone:;
+ (void)rebindSafePhone:accountType:;
+ (void)newRebindPhone:completion:;
+ (void)newRebindPhone:routerParams:completion:;
+ (id)highRiskVCWithEnterfrom:;
+ (void)newBindPhone:completion:;
+ (void)phoneNumberVerifyWithStartTime:networkFinishedTime:enterFrom:error:layoutStyle:;
+ (void)trackRebindClick:;
+ (void)processMiddlePopupInRebindMobileWithEnterFrom:routerParams:completion:;
+ (void)pushToDetailControllerWithTicket:startTime:networkFinishedTime:error:shouldSendTrack:enterFrom:layoutStyle:;
@end
