@interface CJPayRequestParam : NSObject
+ (id)calcuCreateOrderSign:appSecret:;
+ (id)curContextInjectedDataProtocols;
+ (id)getFinanceRisk:;
+ (id)calcuBDCreateOrderSign:appSecret:;
+ (id)calcuIAPSign:appSecret:;
+ (id)calcuPreCreateOrderSign:appSecret:;
+ (id)calcuSign:signKeys:appSecret:;
+ (id)commonDeviceInfoDic;
+ (id)gAppInfoConfig;
+ (id)getMergeRiskInfoWithBizParams:;
+ (id)getRiskInfoParams;
+ (id)getRiskInfoParamsWith:;
+ (void)injectDataProtocol:;
+ (id)riskInfoDict;
+ (id)riskInfoDictWithFinanceRiskWithPath:;
+ (void)setAppInfoConfig:;
+ (id)sysVersion;
+ (id)uaInfoString:;
+ (id)deviceType;
+ (id)appVersion;
+ (id)appName;
+ (id)deviceID;
+ (id)devicePlatform;
+ (id)ipString;
@end
