@interface AWERouteTransition : NSObject
@property (nonatomic) BOOL didTransfer;
@property (nonatomic) AWERouteInfo routeInfo;
@property (nonatomic) AWERouteTransitionInfo transitionInfo;
- (id)withCompletion:;
- (id)fromViewController:;
- (id)withTransitionType:;
- (id)withTransferCompletion:;
- (void)setDidTransfer:;
- (void)addInnerCompletion;
- (BOOL)didTransfer;
- (id)routeInfo;
- (id)URLString;
- (void)dealloc;
- (void)setRouteInfo:;
- (void).cxx_destruct;
- (BOOL)transfer;
- (void)setTransitionInfo:;
- (id)transitionInfo;
@end
