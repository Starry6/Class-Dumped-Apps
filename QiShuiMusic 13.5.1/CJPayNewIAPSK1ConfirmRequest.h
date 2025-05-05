@interface CJPayNewIAPSK1ConfirmRequest : CJPayBaseRequest
+ (id)buildWith:bizContentParms:;
+ (id)deskServerUrlString;
+ (id)p_buildServerUrl;
+ (void)startRequest:bizContentParams:completion:;
@end
