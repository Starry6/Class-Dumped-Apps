@interface IESLiveChargeConfiguration : NSObject
+ (BOOL)allowNewBuyingWithUnconfirmedProduct;
+ (id)remotePromptsWithErrorCode:;
+ (long long)requestProductRetryCount;
+ (BOOL)shouldHandleTransactionOfProduct:;
+ (BOOL)shouldSkipCheckResult:;
+ (id)paymentType;
@end
