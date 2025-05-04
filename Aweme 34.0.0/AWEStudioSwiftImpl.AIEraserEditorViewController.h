@interface AWEStudioSwiftImpl.AIEraserEditorViewController : UIViewController
@property (nonatomic) BOOL needTrimZoomTranstionIn;
@property (nonatomic) q preferredStatusBarStyle;
- (void)startEraseButtonAction:;
- (id)zoomTransitionEndView;
- (BOOL)needTrimZoomTranstionIn;
- (void)setNeedTrimZoomTranstionIn:;
- (void)completeButtonClicked:;
- (void)viewDidLoad;
- (void)cancelButtonClicked:;
- (long long)preferredStatusBarStyle;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
