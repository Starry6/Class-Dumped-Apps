@interface CJSwiftIAPStoreManager : NSObject
- (id)init;
- (void).cxx_destruct;
+ (BOOL)isSK2Enable;
+ (BOOL)isSK2EnableSK1Observer;
+ (id)makeSK1ProductModel:;
+ (void)prefetchProductsWithIdentifiers::;
+ (void)requestSK1ProductsWithIdentifiers::;
+ (void)restoreWithUid:callBack:;
+ (void)restoreWithUid:productIds:callBack:;
+ (void)setupServiceDelegate:;
+ (void)startIAPWithParams::;
+ (void)presentCodeRedemptionSheet;
@end
