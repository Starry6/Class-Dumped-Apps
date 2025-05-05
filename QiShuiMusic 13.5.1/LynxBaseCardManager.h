@interface LynxBaseCardManager : NSObject
@property (nonatomic) LynxView lynxView;
@property (nonatomic) NSMutableArray routeStack;
@property (nonatomic) LynxLruCache lruCache;
@property (nonatomic) <LynxHolder> holder;
- (id)buildLynxView:;
- (void)hideLynxView:;
- (id)holder;
- (id)init:WithCapacity:;
- (void)invokeOnHide:;
- (void)invokeOnShow;
- (id)lruCache;
- (id)lynxView;
- (BOOL)onNavigateBack;
- (void)push:param:;
- (void)registerInitLynxView:;
- (void)replace:param:;
- (id)routeStack;
- (void)setHolder:;
- (void)setLruCache:;
- (void)setLynxView:;
- (void)setRouteStack:;
- (void)clearCaches;
- (void)pop;
- (void)didEnterBackground;
- (void)didEnterForeground;
- (void).cxx_destruct;
@end
