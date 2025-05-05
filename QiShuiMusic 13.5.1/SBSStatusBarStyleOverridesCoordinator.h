@interface SBSStatusBarStyleOverridesCoordinator : NSObject
@property (nonatomic) <SBSStatusBarStyleOverridesCoordinatorDelegate> delegate;
@property (nonatomic) Q styleOverrides;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (unsigned long long)styleOverrides;
- (void)setRegisteredStyleOverrides:reply:;
- (void)_handleStatusBarTapWithContext:withCompletionBlock:;
- (void)_registrationInvalidated:;
@end
