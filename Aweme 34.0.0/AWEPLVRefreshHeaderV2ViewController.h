@interface AWEPLVRefreshHeaderV2ViewController : AWEPadRefreshHeaderViewController
@property (nonatomic) AWEPLVNormalHeaderModel model;
@property (nonatomic) double viewWidth;
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
- (void)setViewWidth:;
- (id)aAWEPadModuleAdapter;
- (id)pageKey;
- (void)viewDidDisplay;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (id)viewSizeWithIndex:collectionView:;
- (void)trackRefreshClick;
- (id)title;
- (double)viewWidth;
- (long long)refreshCount;
+ (Class)aAWEPadModuleAdapterClass;
@end
