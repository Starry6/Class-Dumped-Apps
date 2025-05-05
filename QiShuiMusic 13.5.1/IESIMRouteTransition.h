@interface IESIMRouteTransition : NSObject
@property (nonatomic) BOOL didTransfer;
@property (nonatomic) IESIMRouteInfo routeInfo;
@property (nonatomic) IESIMRouteTransitionInfo transitionInfo;
- (void)setDidTransfer:;
- (id)withCompletion:;
- (BOOL)didTransfer;
- (id)fromViewController:;
- (id)withTransitionType:;
- (id)routeInfo;
- (void)setRouteInfo:;
- (void)dealloc;
- (id)URLString;
- (void).cxx_destruct;
- (BOOL)transfer;
- (id)transitionInfo;
- (void)setTransitionInfo:;
@end
