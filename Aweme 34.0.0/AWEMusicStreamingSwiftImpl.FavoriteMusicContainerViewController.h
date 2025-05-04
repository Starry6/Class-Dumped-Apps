@interface AWEMusicStreamingSwiftImpl.FavoriteMusicContainerViewController : AWEBaseListViewController
@property (nonatomic) @? reloadRightFixedArea;
- (id)tabContentScrollView;
- (id)aweui_emptyPageConfigForState:;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (id)aweui_emptyPageEdgeInsets;
- (BOOL)configWithRouterParamDict:;
- (void)customLayoutCollectionView:;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:forSectionViewModel:;
- (id)reloadRightFixedArea;
- (void)setReloadRightFixedArea:;
- (id)bottomSpecialView;
- (id)bottomSpecialViewSize;
- (void)playerViewDidTapCover:;
- (void)playerViewDidTapInfo:;
- (void)playerViewDidTapConfirmBtn:;
- (BOOL)shouldShowConfirmButton;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (id)initWithNibName:bundle:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)initWithCoder:;
- (void)setupCollectionView:;
@end
