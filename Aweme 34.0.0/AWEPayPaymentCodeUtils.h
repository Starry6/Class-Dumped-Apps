@interface AWEPayPaymentCodeUtils : NSObject
+ (id)douyinFontSize:;
+ (id)getHybridTokenCert:bridgeCommand:;
+ (long long)getAmount:;
+ (id)douyinFontSize:autoScale:;
+ (void)dynamicallyLoadDouyinNumberFont;
+ (id)getCodeToken:;
+ (unsigned long long)getCodeTypeWithCodeToken:;
+ (BOOL)isPersonalCodeWithCodeType:;
+ (id)getAmountShowStr:;
+ (void)showAlertTitle:content:confirmTitle:cancelTitle:confirmBlock:cancelBlock:;
+ (void)showSystemAlert:content:confirmTitle:cancelTitle:confirmBlock:cancelBlock:;
+ (void)openWebPageWithService:url:closeCallBack:;
+ (id)getCodeTimeWithCodeUrl:;
+ (unsigned long long)getCodeTypeWithCodeUrl:;
+ (BOOL)isDownloadCode:;
+ (BOOL)isPersonalCodeWithCodeToken:;
+ (id)extractFieldValueWithURL:field:;
+ (id)getSupportAidsWithCodeType:;
@end
