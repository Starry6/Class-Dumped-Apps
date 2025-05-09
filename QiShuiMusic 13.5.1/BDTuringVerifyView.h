@interface BDTuringVerifyView : UIView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIActivityIndicatorView indicatorView;
@property (nonatomic) UIActivityIndicatorView indicatorView;
@property (nonatomic) WKWebView webView;
@property (nonatomic) <BDTuringVerifyViewDelegate> delegate;
@property (nonatomic) q startLoadTime;
@property (nonatomic) BDTuringConfig config;
@property (nonatomic) BDTuringVerifyModel model;
@property (nonatomic) BOOL adjustViewWhenKeyboardHiden;
@property (nonatomic) BOOL isShow;
@property (nonatomic) BOOL autoVerify;
@property (nonatomic) q closeStatus;
@property (nonatomic) BOOL isPreloadVerifyView;
@property (nonatomic) q startPreloadTime;
@property (nonatomic) q startRefreshTime;
- (void)setAdjustViewWhenKeyboardHiden:;
- (void)handlePiperDialogSize:callback:;
- (void)onWebViewFinish;
- (void)setCloseStatus:;
- (void)stopLoadingView;
- (void)addGestureForWebView;
- (BOOL)adjustViewWhenKeyboardHiden;
- (void)adjustWebViewPosition;
- (BOOL)autoVerify;
- (void)cleanDelegates;
- (void)closeEvent:;
- (long long)closeStatus;
- (void)closeVerifyView:;
- (void)closeVerifyViewFromFeedbackButton;
- (void)closeVerifyViewFromFeedbackClose;
- (void)closeVerifyViewFromMask;
- (id)createIndicatorView;
- (id)customTheme;
- (void)dismissVerifyView;
- (void)handleCallbackResult:;
- (void)handleCallbackStatus:;
- (void)handleDialogSize:;
- (void)handleH5State:callback:;
- (void)handleMaskTime:callback:;
- (void)handleNativeEventUpload:callback:;
- (void)handlePiperGetData:callback:;
- (void)handlePiperGetTouch:callback:;
- (void)handlePiperPageEnd:callback:;
- (void)handlePiperTheme:callback:;
- (void)handlePiperVerifyResult:;
- (void)handlePiperVerifyResult:callback:;
- (void)handlePreloadFinish:callback:;
- (void)handleRefreshFinish:callback:;
- (void)hideVerifyView;
- (void)installPiper;
- (BOOL)isPreloadVerifyView;
- (BOOL)isShow;
- (void)onOrientationChanged:;
- (void)onWebViewFailWithError:;
- (void)refreshVerifyView;
- (void)scheduleDismissVerifyView;
- (void)setAutoVerify:;
- (void)setIsPreloadVerifyView:;
- (void)setIsShow:;
- (void)setStartLoadTime:;
- (void)setStartPreloadTime:;
- (void)setStartRefreshTime:;
- (void)showVerifyView;
- (void)showVerifyViewTillWebViewReady;
- (void)showWebView;
- (long long)startLoadTime;
- (void)startLoadingView;
- (long long)startPreloadTime;
- (long long)startRefreshTime;
- (id)subViewCenter;
- (void)webViewFailWithError:;
- (id)model;
- (void)setWebView:;
- (void)dealloc;
- (void)setModel:;
- (void)webView:didFinishNavigation:;
- (id)webView;
- (void)setFrame:;
- (void)layoutSubviews;
- (void)setConfig:;
- (void)setDelegate:;
- (void)scrollViewDidScroll:;
- (id)initWithFrame:;
- (void)webView:didFailProvisionalNavigation:withError:;
- (id)delegate;
- (void).cxx_destruct;
- (void)webView:didStartProvisionalNavigation:;
- (id)config;
- (id)indicatorView;
- (void)webView:didFailNavigation:withError:;
- (void)setIndicatorView:;
- (id)customText;
- (void)setAnimationFrame:;
@end
