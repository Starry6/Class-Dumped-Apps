@interface AWEPLVConfigurationTriptychBannerCellController : AWEPLVConfigurationBannerCellController
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
- (id)aAWEPadModuleAdapter;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (void)configCardCellGradientView:;
- (long long)columnNumOfBannerView;
+ (Class)aAWEPadModuleAdapterClass;
@end
