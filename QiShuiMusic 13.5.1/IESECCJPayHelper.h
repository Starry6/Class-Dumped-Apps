@interface IESECCJPayHelper : NSObject
+ (id)bioType;
+ (id)CJPaySDKVersion;
+ (id)biometricDataBase64String;
+ (id)getFinanceRiskWithScene:;
+ (id)installmentInfoWithCount:;
+ (void)openUniversalPayDeskWithParams:callback:;
+ (id)submitOrderParamsJSONStringWithInstallmentCount:;
+ (BOOL)isCool;
@end
