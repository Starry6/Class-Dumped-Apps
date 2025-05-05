@interface MPAVRoutingControllerSelectionQueue : NSObject
@property (nonatomic) MPAVRoutingController routingController;
@property (nonatomic) BOOL hasPendingPickedRoutes;
@property (nonatomic) NSSet pendingPickedRoutes;
@property (nonatomic) MPAVRoute pendingPickedRoute;
- (id)routingController;
- (id)initWithRoutingController:;
- (BOOL)hasPendingRoutes;
- (BOOL)hasPendingPickedRoutes;
- (void)enqueueSelectionOperation:forRoutes:completion:;
- (void)pickedRouteDidChange;
- (BOOL)routeIsPendingPick:;
- (void)cancelInProgressSelectionForRoute:;
- (void)_dequeueSelectionWhenPossible;
- (void).cxx_destruct;
- (void)removePendingRoutes:withError:;
- (void)_dequeue;
- (id)pendingPickedRoute;
- (void)_processSelection:completion:;
- (void)removePendingRoutes:;
- (id)pendingPickedRoutes;
- (void)_enqueue:;
- (void)removeAllPendingRoutes;
- (void)addPendingRoutes:;
@end
