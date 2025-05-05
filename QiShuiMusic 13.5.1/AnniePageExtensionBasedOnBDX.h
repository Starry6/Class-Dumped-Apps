@interface AnniePageExtensionBasedOnBDX : NSObject
@property (nonatomic) BDXViewController<BDXPageContainerProtocol> bdxViewController;
- (void)updateStatusBarBackgroundColor:;
- (id)bdxViewController;
- (id)initWithBDXViewController:;
- (void)setBdxViewController:;
- (void)setDisableNativeClose:;
- (void)setNavigationSwipeBackEnable:;
- (void)setWebViewBounceEnable:;
- (void)updateNavigationBarColor:;
- (void)updateStatusBarStyle:;
- (void)updateTitleColor:;
- (void)setStatusBarHidden:;
- (void).cxx_destruct;
@end
