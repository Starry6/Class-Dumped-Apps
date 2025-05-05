@interface SFStoreBanner : SFPinnableBanner
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <SFAppSuggestionBannerDelegate> delegate;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)delegate;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)themeDidChange;
- (void)_setBlockedByUser;
- (id)presentingViewControllerForLockupView:;
- (void)lockupView:didFailRequestWithError:;
- (void)lockupView:appStateDidChange:;
- (void)productPage:didFailLoadWithError:;
- (void)productPage:didFinishWithResult:;
- (void)productPage:didFinishPurchase:withError:;
- (void)productPage:willMakePurchases:;
- (id)initWithProductID:mainDocumentURL:affiliateData:applicationLaunchArgument:;
- (void)_setUpStoreKitProductView;
- (void)_setUpAppStoreLockUpView;
- (void)_removeAppStoreLockUpView;
- (void)_openApp;
+ (BOOL)omitsBottomSeparator;
@end
