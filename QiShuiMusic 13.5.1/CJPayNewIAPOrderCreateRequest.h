@interface CJPayNewIAPOrderCreateRequest : CJPayBaseRequest
+ (id)buildParams:params:extParams:;
+ (id)deskServerUrlString;
+ (id)p_buildServerUrl;
+ (void)startRequest:params:exts:completion:;
@end
