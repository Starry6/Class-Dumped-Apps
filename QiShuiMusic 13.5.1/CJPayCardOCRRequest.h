@interface CJPayCardOCRRequest : CJPayBaseRequest
+ (id)apiPath;
+ (id)p_buildRequestParamsWithBizParams:;
+ (id)p_secureRequestParams;
+ (void)startWithBizParams:completion:;
@end
