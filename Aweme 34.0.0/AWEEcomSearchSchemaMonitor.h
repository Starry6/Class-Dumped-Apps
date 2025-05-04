@interface AWEEcomSearchSchemaMonitor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)routerDidTransferWithURLString:fromViewController:toViewController:transitionType:;
- (void)routerDidFailTransferingWithURLString:errorMessage:;
- (void)routerDidRetrieveViewControllerForURLString:viewController:;
- (BOOL)isEcomSearchWithURL:;
- (BOOL)isSearchSchemaWithURL:;
- (BOOL)isPhotoSearchWithURL:;
- (BOOL)isSearchInMallWithURL:;
- (BOOL)isMallSaaSSearchWithURL:;
- (void)reportAndValidateWithURLString:;
- (BOOL)isSearchSchemaWithURLString:;
- (void)reportOpenSchemaWithURLString:errorMessage:;
- (BOOL)shouldVerifiedWithURLString:;
- (void)invokeValidatorWithURLString:;
- (void)reportVerificationFailedWithURLString:response:;
- (void)showPromptWithInfoIfNeeded:;
- (id)sceneDescriptionWithURL:;
+ (void)_aweLazyRegisterLoad;
+ (void)monitorSendRequestWithParams:;
+ (id)sharedMonitor;
@end
