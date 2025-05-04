@interface AWEPOIDetailRouterInterceptor : NSObject
@property (nonatomic) BOOL shouldInterceptor;
@property (nonatomic) BOOL shouldPreventVideoPause;
@property (nonatomic) AWEPOIFeedPlayerManager feedManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)routerDidBeginTransferWithURLString:;
- (void)routerDidTransferWithURLString:fromViewController:toViewController:transitionType:;
- (BOOL)shouldPreventVideoPause;
- (id)feedManager;
- (void)setFeedManager:;
- (void)setShouldInterceptor:;
- (BOOL)shouldInterceptor;
- (void)processGoodsDetailIfNeeded:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
@end
