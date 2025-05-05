@interface EAccountSDK : NSObject
+ (id)getOperatorType;
+ (void)startReportLog:;
+ (void)getMobileCodeWithTimeout:completion:failure:;
+ (void)getServerTimeStampValue:appSecret:;
+ (void)initWithSelfKey:appSecret:;
+ (BOOL)isCellularDataEnable;
+ (void)mobileCode:appSecret:bussinessType:timeoutModel:block:;
+ (void)preGetMobileRedirect:timeoutInterval:redirectReqId:redirectOrder:completion:failureHandler:;
+ (void)printConsoleEnable:;
+ (void)processPreGetMobileRedirect:timeoutInterval:redirectReqId:completion:failureHandler:;
+ (void)processTimeStamp:appKey:appSecret:;
+ (void)requestPRELogin:completion:failure:;
+ (void)requestPreLogin:completion:failure:;
+ (void)requestWithBaseURL:params:httpMethod:bParamsEncrypto:tag:appKey:appSecret:responsBlack:;
+ (void)startReportLog:costInterval:;
+ (void)startUpload80012LogWithReqID:;
+ (void)setDomainName:;
@end
