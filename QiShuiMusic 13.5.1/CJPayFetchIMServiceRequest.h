@interface CJPayFetchIMServiceRequest : CJPayBaseRequest
+ (id)p_buildRequestParamsWithAppID:;
+ (void)startWithAppID:completion:;
@end
