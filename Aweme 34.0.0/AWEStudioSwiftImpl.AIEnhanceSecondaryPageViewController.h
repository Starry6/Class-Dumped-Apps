@interface AWEStudioSwiftImpl.AIEnhanceSecondaryPageViewController : UIViewController
@property (nonatomic) BOOL isLoading;
@property (nonatomic) @? resetAction;
@property (nonatomic) @? showOriginalAction;
@property (nonatomic) q preferredStatusBarStyle;
- (void)updateNLEInterface:;
- (void)updateTagList:;
- (void)updateLoadingProgress:;
- (void)handleEnhanceApplyFinish:enableWiperAnimation:;
- (BOOL)isLoading;
- (long long)intensity;
- (id)resetAction;
- (id)showOriginalAction;
- (void)setShowOriginalAction:;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (id)initWithNibName:bundle:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setResetAction:;
- (void)cancelAction:;
- (void)saveAction:;
@end
