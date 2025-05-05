@interface RUINavBarSpinnerManager : NSObject
@property (nonatomic) q activityIndicatorViewStyle;
- (id)init;
- (void).cxx_destruct;
- (void)setActivityIndicatorViewStyle:;
- (long long)activityIndicatorViewStyle;
- (void)stopAnimatingForIdentifier:;
- (void)startAnimatingInNavItem:title:forIdentifier:hideBackButton:hideLeftItems:;
+ (id)sharedSpinnerManager;
@end
