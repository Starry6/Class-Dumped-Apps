@interface AWEPLVAlbumTitleBottomCellController : AWEPadListReusableViewBaseController
@property (nonatomic) AWEPLVAlbumViewModel viewModel;
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
@property (nonatomic) double containerWidth;
- (id)diffIdentifier;
- (id)aAWEPadModuleAdapter;
- (void)viewDidDisplay;
- (void)configView:;
- (id)viewSizeWithIndex:collectionView:;
- (void)configFavoriteBind:;
- (void)configCornerIcon:;
- (long long)breakPointCardColumnNum;
- (Class)viewClass;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:;
- (double)containerWidth;
- (void)setContainerWidth:;
+ (Class)aAWEPadModuleAdapterClass;
@end
