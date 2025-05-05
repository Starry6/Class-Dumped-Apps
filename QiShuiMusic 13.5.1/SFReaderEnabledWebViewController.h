@interface SFReaderEnabledWebViewController : SFWebViewController
@property (nonatomic) _SFReaderController readerController;
@property (nonatomic) <SFReaderEnabledWebViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)readerController;
- (void)readerController:didClickLinkRequestingNewWindowInReaderWithRequest:;
- (void)readerController:didClickLinkInReaderWithRequest:;
- (void)didFindAppBannerWithContent:;
- (void)traitCollectionDidChange:;
- (void)createReaderWebViewForReaderController:;
- (void)webView:didCommitNavigation:;
- (void)readerController:didDetermineReaderAvailability:dueTo:;
- (void)readerController:didDetermineAdditionalTextSamples:dueTo:;
- (void).cxx_destruct;
- (void)loadView;
- (void)invalidate;
- (void)readerController:contentDidBecomeReadyWithDetectedLanguage:;
- (void)setUpReaderWithReaderWebView:;
- (void)_updateDarkModeEnabled;
@end
