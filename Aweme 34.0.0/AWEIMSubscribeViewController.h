@interface AWEIMSubscribeViewController : AWEBaseListViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweui_emptyPageConfigForState:;
- (BOOL)configWithRouterParamDict:;
- (id)sectionControllerClassArray;
- (void)__setupUI;
- (void)__backBtnClicked;
- (void)__addNavigationBarUnreadView;
- (void)rightBarButtonItenAction;
- (void)viewWillDisappear:;
- (void)viewDidLoad;
- (void)setupCollectionView:;
@end
