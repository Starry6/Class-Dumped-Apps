@interface AWEPadSplitViewBackgroundViewController : UIViewController
@property (nonatomic) <AWEPadSplitViewService> service;
@property (nonatomic) @? didLayoutSubviewsBlock;
@property (nonatomic) @? didAppearBlock;
@property (nonatomic) @? didDisappearBlock;
@property (nonatomic) @? willAppearBlock;
@property (nonatomic) @? viewWillTransitionBlock;
- (id)willAppearBlock;
- (void)setWillAppearBlock:;
- (id)didDisappearBlock;
- (void)setDidDisappearBlock:;
- (id)didLayoutSubviewsBlock;
- (void)setDidLayoutSubviewsBlock:;
- (id)viewWillTransitionBlock;
- (void)setViewWillTransitionBlock:;
- (id)service;
- (void)viewDidLayoutSubviews;
- (void)setService:;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void)loadView;
- (void)viewDidDisappear:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)didAppearBlock;
- (void)setDidAppearBlock:;
@end
