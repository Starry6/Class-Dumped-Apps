@interface AWESECRouterModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)URLString:attachedSQRID:;
- (id)URLStringAttachedSQRSession:;
- (BOOL)enableWebcastRouteSecurity;
- (BOOL)routeInternalCheckin:checkinType:fromVC:;
- (void)routeInternalCheckoutWithSuccess:checkoutType:fromVC:toVC:;
@end
