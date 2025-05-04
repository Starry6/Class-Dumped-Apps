@interface AWEEcomSearchRecommendAfterPayManager : NSObject
@property (nonatomic) BDXBridgeEventSubscriber subscriber;
@property (nonatomic) UIViewController productDetailVC;
- (void)sendRequestWithURL:params:response:completion:;
- (void)subscribePayEvent;
- (void)handlePaySuccessMsg:;
- (BOOL)isSearchResultVC:;
- (void)setProductDetailVC:;
- (id)topSearchResultVC;
- (id)productDetailVC;
- (void)sendRecommendRequestWithParam:completion:;
- (void)removeProductDetailIfNeeded;
- (id)init;
- (id)subscriber;
- (void)setSubscriber:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
