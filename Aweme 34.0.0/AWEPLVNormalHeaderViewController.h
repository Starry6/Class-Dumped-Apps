@interface AWEPLVNormalHeaderViewController : AWEPadListReusableViewBaseController
@property (nonatomic) double viewWidth;
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
- (void)setViewWidth:;
- (id)aAWEPadModuleAdapter;
- (void)viewDidDisplay;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (id)viewSizeWithIndex:collectionView:;
- (Class)viewClass;
- (double)viewWidth;
+ (Class)aAWEPadModuleAdapterClass;
@end
