@interface AWEPadSpeedPanelViewController : UIViewController
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView maskView;
@property (nonatomic) UITableView tableView;
@property (nonatomic) UIVisualEffectView visualEffectView;
@property (nonatomic) BOOL hasShowed;
@property (nonatomic) @? buttonTargeFrameBlock;
@property (nonatomic) NSArray speedItems;
@property (nonatomic) double selectedSpeed;
@property (nonatomic) BOOL disableDismissOnLayout;
@property (nonatomic) @? selectBlock;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)duxGrid_viewDidChangeBreakPointFrom:toBreakPoint:;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)dismissWithAnimated:completion:;
- (BOOL)awe_shouldBypassPresentationHook;
- (void)setSelectedSpeed:;
- (void)setSpeedItems:;
- (void)setSelectBlock:;
- (void)setButtonTargeFrameBlock:;
- (void)setDisableDismissOnLayout:;
- (BOOL)hasShowed;
- (void)setHasShowed:;
- (id)aAWEPadTabBarAdapter;
- (id)speedItems;
- (BOOL)disableDismissOnLayout;
- (id)buttonTargeFrameBlock;
- (void)tapMask;
- (void)show;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (id)maskView;
- (void)viewDidLayoutSubviews;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (double)selectedSpeed;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (id)containerView;
- (id)tableView;
- (void)setVisualEffectView:;
- (void)setContainerView:;
- (void)updateLayout;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)viewDidAppear:;
- (void)setMaskView:;
- (id)visualEffectView;
- (id)selectBlock;
- (id)dismissBlock;
- (void)setDismissBlock:;
+ (Class)aAWEPadTabBarAdapterClass;
@end
