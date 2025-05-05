@interface AIDAServiceContext : NSObject
@property (nonatomic) NSDictionary authenticationResults;
@property (nonatomic) BOOL shouldForceOperation;
@property (nonatomic) q operationUIPermissions;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) NSDictionary signInContexts;
@property (nonatomic) NSDictionary signOutContexts;
@property (nonatomic) <AASignInFlowControllerDelegate> aaSignInFlowControllerDelegate;
@property (nonatomic) <AASignOutFlowControllerDelegate> aaSignOutFlowControllerDelegate;
@property (nonatomic) <CDPStateUIProvider> cdpUiProvider;
- (id)init;
- (id)viewController;
- (void).cxx_destruct;
- (id)authenticationResults;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)cdpUiProvider;
- (BOOL)shouldForceOperation;
- (long long)operationUIPermissions;
- (id)signInContexts;
- (id)signOutContexts;
- (id)aaSignInFlowControllerDelegate;
- (id)aaSignOutFlowControllerDelegate;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)contextWithContext:;
@end
