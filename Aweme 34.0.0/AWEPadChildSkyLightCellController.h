@interface AWEPadChildSkyLightCellController : AWPLVCommonCellController
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
@property (nonatomic) AWEPLVCommonCardCellDataSource cardDataSource;
@property (nonatomic) NSObject<AWEPLVCommonCardViewModelProtocol> viewModel;
@property (nonatomic) BOOL useVerticalCover;
@property (nonatomic) @ cardModel;
@property (nonatomic) # dataModelClass;
- (id)cardModel;
- (void)setCardModel:;
- (void)viewDidDisplay;
- (void)configView:;
- (id)viewModelMap;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (id)viewSizeWithIndex:collectionView:;
- (Class)dataModelClass;
- (void)setCardDataSource:;
- (id)cardDataSource;
- (BOOL)useVerticalCover;
- (void)setUseVerticalCover:;
- (void)setDataModelClass:;
- (Class)viewClass;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:;
@end
