@interface AMSPurchaseRequestEncoder : AMSURLRequestEncoder
@property (nonatomic) AMSPurchaseInfo purchaseInfo;
@property (nonatomic) NSObject<OS_dispatch_queue> purchaseRequestQueue;
- (id)purchaseRequestQueue;
- (id)initWithPurchaseInfo:bag:;
- (void)setBag:;
- (void)setPurchaseRequestQueue:;
- (id)encodeRequest;
- (id)purchaseInfo;
- (void).cxx_destruct;
- (id)bag;
- (id)initWithPurchaseInfo:;
+ (long long)_anisetteTypeFromAccount:;
+ (id)_bagURLKeysFromPurchaseInfo:;
+ (BOOL)isRedirectBagURLOverrideEnabled;
+ (id)_bagURLKeysForPurchaseType:withProductType:prefix:;
+ (id)bagURLFromPurchaseInfo:bag:error:;
+ (void)configureRequest:purchaseInfo:bag:error:;
+ (id)_parametersFromPurchaseInfo:error:;
+ (id)_buyProductURLKeysForProductType:prefix:;
@end
