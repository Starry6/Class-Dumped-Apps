@interface BDXPagerListContainerViewController : UIViewController
@property (nonatomic) @? viewWillAppearBlock;
@property (nonatomic) @? viewDidAppearBlock;
@property (nonatomic) @? viewWillDisappearBlock;
@property (nonatomic) @? viewDidDisappearBlock;
- (void)setViewDidDisappearBlock:;
- (void)setViewWillAppearBlock:;
- (id)viewDidDisappearBlock;
- (id)viewWillAppearBlock;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)viewDidDisappear:;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (id)viewDidAppearBlock;
- (void)setViewDidAppearBlock:;
- (id)viewWillDisappearBlock;
- (void)setViewWillDisappearBlock:;
@end
