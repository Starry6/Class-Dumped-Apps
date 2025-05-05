@interface WBSURLSpoofingMitigator : NSObject
@property (nonatomic) BOOL UIShouldReflectCommittedURLInsteadOfCurrentURL;
@property (nonatomic) q navigationSource;
- (void)didStartProvisionalNavigationWithUserInitiatedAction:;
- (void)setNavigationSource:;
- (BOOL)UIShouldReflectCommittedURLInsteadOfCurrentURL;
- (void)_stopTrackingInterruptedProvisionalNavigations;
- (void)didFailProvisionalNavigationWithError:;
- (void)willStartNewBrowserChromeInitiatedNavigation;
- (void).cxx_destruct;
- (void)didCommitNavigation;
- (void)_determineIfPageIsTryingToSpoofAddressFieldWhenInterruptingProvisionalNavigation;
- (long long)navigationSource;
- (void)_setUIShouldReflectCommittedURLInsteadOfCurrentURL:;
+ (BOOL)automaticallyNotifiesObserversOfUIShouldReflectCommittedURLInsteadOfCurrentURL;
@end
