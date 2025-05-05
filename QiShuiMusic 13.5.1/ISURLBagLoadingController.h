@interface ISURLBagLoadingController : NSObject
@property (nonatomic) NSDictionary bagDictionary;
@property (nonatomic) BOOL loadingBag;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleAccountStoreDidChangeNotification:;
- (id)bagDictionary;
- (void)_handleNetworkReachabilityFlagsDidChangeNotification:;
- (void)_handleStoreFrontDidChangeNotification:;
- (void)addBagObserver:;
- (void)removeBagObserver:;
- (void)requestAccessToBagUsingBlock:;
- (void)reloadBag;
- (void)_didCompleteLoadingBagDictionary:withError:;
- (void)_reloadURLBagAllowingUpdateUsingExistingBagDictionary:;
- (void)_updateBagWithDictionary:error:;
- (BOOL)isLoadingBag;
+ (id)sharedBagLoadingController;
@end
