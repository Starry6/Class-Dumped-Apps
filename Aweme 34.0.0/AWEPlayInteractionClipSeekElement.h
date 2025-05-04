@interface AWEPlayInteractionClipSeekElement : AWEPlayInteractionLeftElement
@property (nonatomic) AWESearchClipSeekElementVIew clipSeekView;
- (void)initializeElement;
- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)dynamicWidthRemakeLayout;
- (void)viewDidDisposed;
- (id)clipSeekView;
- (void)clipSeekButtonClick;
- (void)trackClipSeekButtonEvent:;
- (void)setClipSeekView:;
- (void)viewDidLoad;
- (void).cxx_destruct;
+ (BOOL)shouldActiveWithModel:;
@end
