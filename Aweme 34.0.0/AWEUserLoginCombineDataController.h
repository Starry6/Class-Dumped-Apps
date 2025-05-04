@interface AWEUserLoginCombineDataController : AWEUserLoginBaseDataController
@property (nonatomic) NSDictionary loginResultMonitorDict;
- (id)loginResultMonitorDict;
- (void)setLoginResultMonitorDict:;
- (void)addCarrierParamsWithRequest:;
- (void)handleLoginError:user:response:ticketModel:fromShared:;
- (void)handleLoginSuccessAccount:user:;
- (BOOL)isSpecialErrorHandled:user:ticketModel:fromShared:;
- (void)p_jumpToAuthUser:;
- (void)sendCodeWithSecUID:response:;
- (void)requestLoginWithUser:loginType:;
- (void).cxx_destruct;
@end
