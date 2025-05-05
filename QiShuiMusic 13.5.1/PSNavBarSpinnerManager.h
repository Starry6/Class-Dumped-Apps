@interface PSNavBarSpinnerManager : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)startAnimatingInNavItem:forIdentifier:hideBackButton:;
- (void)startAnimatingInNavItem:forIdentifier:;
- (void)stopAnimatingForIdentifier:;
+ (id)sharedSpinnerManager;
@end
