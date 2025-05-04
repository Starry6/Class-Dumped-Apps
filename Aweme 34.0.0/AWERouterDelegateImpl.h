@interface AWERouterDelegateImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)routerDidTransferWithURLString:fromViewController:toViewController:transitionType:;
- (void)routerDidFailTransferingWithURLString:errorMessage:;
- (void)routerDidRetrieveViewControllerForURLString:viewController:;
- (void)routerDidFailRetrievingViewControllerForURLString:errorMessage:;
- (void)routerHasBeenModifiedBeforeViewControllerRetrieveWithOldURLString:newURLString:;
- (void)routerHasBeenModifiedBeforeTransitionRetrieveWithOldURLString:newURLString:;
- (void)routerHasBeenModifiedWhenTransferingWithOldURLString:newURLString:;
- (void)routerHasBeenInterceptWithURLString:key:;
- (BOOL)boolValueForKey:;
+ (void)_aweLazyRegisterLoad_Settings;
+ (id)sharedInstance;
@end
