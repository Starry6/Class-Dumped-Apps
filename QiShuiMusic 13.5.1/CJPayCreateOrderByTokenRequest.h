@interface CJPayCreateOrderByTokenRequest : CJPayBaseRequest
+ (id)buildRequestParamsWithBizParams:bizUrl:;
+ (void)p_setTrackerCommonParams:;
+ (void)startWithBizParams:bizUrl:completion:;
@end
