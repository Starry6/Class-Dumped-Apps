@interface AWEPreviewBizUIContainerViewController : AWEBaseListViewController
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:forSectionViewModel:;
- (void)viewWillDisappear:;
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:;
- (void)setupUI;
- (void)setupCollectionView:;
- (void)backButtonTapped;
@end
