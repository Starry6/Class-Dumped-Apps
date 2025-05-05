@interface LynxCardManager : LynxBaseCardManager
- (void)hideLynxView:;
- (id)holder;
- (void)invokeOnHide:;
- (void)invokeOnShow;
- (id)lruCache;
- (id)lynxView;
- (void)pauseTransition:;
- (id)routeStack;
- (void)setHolder:;
- (void)setLruCache:;
- (void)setLynxView:;
- (void)setRouteStack:;
- (void).cxx_destruct;
@end
