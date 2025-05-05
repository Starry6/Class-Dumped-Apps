@interface CJPayIDCardOCRRequest : CJPayBaseRequest
+ (id)apiPath;
+ (id)p_buildRequestParamsWithBizParams:scanStatus:;
+ (id)p_secureRequestParams;
+ (void)startWithScanStatus:bizParams:completion:;
@end
