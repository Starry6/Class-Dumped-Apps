@interface AWEMusicPerformanceListViewController : AWEBaseListViewController
- (id)aweui_emptyPageConfigForState:;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (void)customLayoutCollectionView:;
- (id)sectionControllerClassArray;
- (id)initWithMusicianId:musicianName:;
- (void)viewDidLoad;
- (BOOL)hidesBottomBarWhenPushed;
- (void)quit;
- (void)setupCollectionView:;
@end
