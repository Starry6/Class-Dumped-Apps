@interface AMSFDSService : NSObject
+ (id)cacheFDS:forPurchaseInfo:;
+ (id)cachedFDSForPurchaseInfo:;
+ (id)didConsumeFDSForPurchaseInfo:;
+ (id)generateFDSWithRequest:;
@end
