@interface CJPayUnlockBankCardRequest : CJPayBaseRequest
+ (id)apiPath;
+ (id)p_requestParamWithBizParam:;
+ (void)startRequestWithBizParam:completion:;
@end
