@interface SFOverlayProvider : NSObject
@property (nonatomic) UIViewController overlayViewController;
@property (nonatomic) NSURL url;
@property (nonatomic) <SFOverlayProviderDelegate> delegate;
@property (nonatomic) BOOL available;
@property (nonatomic) _SFPerSitePreferencesVendor _preferencesVendor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_updateAppClipOverlayPreferenceHook;
- (void)requestOverlayWithPreferencesVendor:completion:;
- (id)url;
- (id)initWithURL:;
- (id)overlayViewController;
- (void)setDelegate:;
- (void)setAvailable:;
- (BOOL)isAvailable;
- (id)delegate;
- (void).cxx_destruct;
- (void)cardViewControllerDidDisappear:clipDidOpen:persistUserSettings:;
- (void)showOverlayInScrollView:viewController:;
- (void)hideOverlayAnimated:;
- (void)webViewBackforwardGestureNavigationWillBegin;
- (void)webViewBackforwardGestureNavigationDidEnd;
- (id)_preferencesVendor;
- (void)_setPreferencesVendor:;
+ (BOOL)alwaysShowOverlayForDebug;
@end
