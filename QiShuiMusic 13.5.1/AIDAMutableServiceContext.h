@interface AIDAMutableServiceContext : AIDAServiceContext
@property (nonatomic) NSDictionary authenticationResults;
@property (nonatomic) BOOL shouldForceOperation;
@property (nonatomic) q operationUIPermissions;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) NSDictionary signInContexts;
@property (nonatomic) NSDictionary signOutContexts;
@property (nonatomic) <AASignInFlowControllerDelegate> aaSignInFlowControllerDelegate;
@property (nonatomic) <AASignOutFlowControllerDelegate> aaSignOutFlowControllerDelegate;
@property (nonatomic) <CDPStateUIProvider> cdpUiProvider;
- (void)setViewController:;
- (void)setAuthenticationResults:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (void)setCdpUiProvider:;
- (void)setOperationUIPermissions:;
- (void)setShouldForceOperation:;
- (void)setSignInContexts:;
- (void)setSignOutContexts:;
- (void)setAaSignInFlowControllerDelegate:;
- (void)setAaSignOutFlowControllerDelegate:;
@end
