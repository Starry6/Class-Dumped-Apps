@interface AWEPLVChildHistoryCellController : AWEPadListReusableViewBaseController
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
@property (nonatomic) double containerWidth;
@property (nonatomic) AWEPLVChildHistoryViewModel viewModel;
- (id)sectionViewModel;
- (void)setSectionViewModel:;
- (id)diffIdentifier;
- (id)aAWEPadModuleAdapter;
- (void)viewDidDisplay;
- (void)configView:;
- (id)viewSizeWithIndex:collectionView:;
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
