@interface AWEPLVHistoryHeaderViewController : AWEPadListReusableViewBaseController
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
@property (nonatomic) double viewWidth;
- (void)setViewWidth:;
- (id)aAWEPadModuleAdapter;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (id)viewSizeWithIndex:collectionView:;
- (void)setupButton:headerView:;
- (void)handleClickHistory:;
- (void)handleClickFavourite;
- (void)handleClickDownload;
- (void)tryLoginWithCompletion:;
- (Class)viewClass;
- (double)viewWidth;
+ (Class)aAWEPadModuleAdapterClass;
@end
