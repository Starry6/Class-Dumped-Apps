@interface WKASCAuthorizationPresenterDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoordinator:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)authorizationPresenter:credentialRequestedForLoginChoice:authenticatedContext:completionHandler:;
- (void)authorizationPresenter:validateUserEnteredPIN:completionHandler:;
- (void)dispatchCoordinatorCallback:;
@end
