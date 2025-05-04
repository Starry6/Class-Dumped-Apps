@interface AWEPLVCinemaV2VajraCellController : AWEPadListReusableViewBaseController
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
- (id)aAWEPadModuleAdapter;
- (void)trackClick;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (id)viewSizeWithIndex:collectionView:;
- (Class)viewClass;
- (void)didSelectItemAtIndex:;
+ (Class)aAWEPadModuleAdapterClass;
@end
