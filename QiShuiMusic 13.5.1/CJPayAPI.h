@interface CJPayAPI : NSObject
+ (void)setupFontScale:;
+ (BOOL)canProcessURL:;
+ (BOOL)canProcessUserActivity:;
+ (void)configHost:;
+ (void)enableMergeGeckoRequest:;
+ (id)getAPIVersion;
+ (void)lazyInitCJPay;
+ (void)openBDPayDeskWithConfig:orderParams:delegate:;
+ (void)openBalanceRechargeDeskWithParams:withDelegate:;
+ (void)openBalanceWithdrawDeskWithParams:withDelegate:;
+ (void)openBankCardListWithMerchantId:appId:userId:;
+ (void)openBytePayDeskWithSchemaParams:withDelegate:;
+ (void)openEcommercePayDeskWithParams:withDelegate:;
+ (void)openFastPayDeskWithConfig:orderParams:withDelegate:;
+ (void)openH5PayDeskWithConfig:orderURL:withDelegate:;
+ (void)openPayDeskWithConfig:orderParams:withDelegate:;
+ (void)openPayManagerWithAppId:merchantId:;
+ (void)openScheme:callBack:;
+ (void)openScheme:withDelegate:;
+ (void)openSetPasswordDeskWithParams:withDelegate:;
+ (void)openTradeRecordWithAppId:merchantId:;
+ (void)openUniteSign:withDelegate:;
+ (void)openUniversalPayDeskWithParams:withDelegate:;
+ (void)openWithConfig:scheme:withDelegate:;
+ (void)openWithdrawDeskWithConfig:orderURL:withDelegate:;
+ (void)registerAppInfo:;
+ (void)registerInitClass:;
+ (void)registerMetaSecDelegate:;
+ (void)requestAuth:withDelegate:;
+ (void)requestCreateOrderBeforeOpenBytePayDesk:;
+ (void)setupLanguage:;
+ (void)syncOfflineWith:;
+ (void)setTheme:;
+ (void)registerDelegate:;
@end
