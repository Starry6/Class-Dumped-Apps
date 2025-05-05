@interface CJPayNewCardPayRequest : CJPayBaseRequest
+ (id)apiPath;
+ (id)buildRequestParams:withExtraParams:;
+ (id)p_secureRequestParams:;
+ (void)startWithOrderResponse:withExtraParams:completion:;
@end
