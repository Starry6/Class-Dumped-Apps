@interface AWESecRouteListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)routerDidRetrieveViewControllerForURLString:viewController:;
- (void)onDetectBadRoute:toLanding:;
- (void)onRouterDelegate:viewController:;
- (void)routerDidTransferWithURLString:viewController:;
+ (id)sharedInstance;
@end
