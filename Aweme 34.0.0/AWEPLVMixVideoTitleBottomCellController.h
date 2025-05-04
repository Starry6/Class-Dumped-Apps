@interface AWEPLVMixVideoTitleBottomCellController : AWEPadPolymericChannelVideoBaseCellController
@property (nonatomic) AWEPLVAwemeViewModel viewModel;
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
@property (nonatomic) double containerWidth;
- (id)diffIdentifier;
- (id)aAWEPadModuleAdapter;
- (void)configCardData:;
- (void)viewDidDisplay;
- (void)configView:;
- (id)viewSizeWithIndex:collectionView:;
- (long long)breakPointCardColumnNum;
- (id)videoTimeFormate:;
- (void)configFavouriteBind:;
- (Class)viewClass;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:;
- (double)containerWidth;
- (void)setContainerWidth:;
+ (Class)aAWEPadModuleAdapterClass;
@end
