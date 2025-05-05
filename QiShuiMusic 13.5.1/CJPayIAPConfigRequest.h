@interface CJPayIAPConfigRequest : CJPayBaseRequest
+ (id)buildWithParms:;
+ (id)deskServerUrlString;
+ (id)p_buildServerUrl;
+ (void)startRequest:completion:;
@end
