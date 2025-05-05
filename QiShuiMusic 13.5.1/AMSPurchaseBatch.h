@interface AMSPurchaseBatch : NSObject
@property (nonatomic) BOOL isComplete;
@property (nonatomic) NSLock lock;
@property (nonatomic) AMSLazyPromise promise;
@property (nonatomic) NSMutableArray purchases;
@property (nonatomic) NSMutableDictionary purchaseMap;
@property (nonatomic) NSMutableArray results;
- (void)setIsComplete:;
- (BOOL)isComplete;
- (id)lock;
- (id)results;
- (id)promise;
- (void).cxx_destruct;
- (void)setLock:;
- (id)initWithPurchases:weakPromise:;
- (id)purchaseForPurchaseId:;
- (BOOL)finishPurchase:withError:;
- (BOOL)finishPurchase:withResult:;
- (id)nextPurchase;
- (id)purchases;
- (id)purchaseMap;
@end
