@interface AWEUIPreviewFloatWindowNavigationController : UINavigationController
@property (nonatomic) @? appearBlock;
@property (nonatomic) @? disappearBlock;
- (void)backButtonDidClick;
- (void)setDisappearBlock:;
- (id)disappearBlock;
- (void)viewWillDisappear:;
- (void)viewDidLoad;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)setAppearBlock:;
- (id)appearBlock;
@end
