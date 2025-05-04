@interface AWESECRouterMonitor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)routerDidTransferWithURLString:fromViewController:toViewController:transitionType:;
- (void)routerDidFailTransferingWithURLString:errorMessage:;
- (void)routerDidRetrieveViewControllerForURLString:viewController:;
- (void)routerDidFailRetrievingViewControllerForURLString:errorMessage:;
- (id)routerModificationBeforeRetrievingControllerWithURLString:;
- (id)routerModificationBeforeRetrievingTransitionWithURLString:;
- (id)routerModificationWhenTransferingWithTransitionInfo:;
- (void)registerRouterDelegate;
- (void)injectPlugins;
+ (id)shared;
+ (void)start;
@end
