@interface AWEPLVMoreHeaderViewController : AWEPadListReusableViewBaseController
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
@property (nonatomic) double viewWidth;
- (void)setViewWidth:;
- (id)aAWEPadModuleAdapter;
- (void)trackClickMoreButton;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (void)handleTapMoreButton;
- (Class)viewClass;
- (double)viewWidth;
+ (Class)aAWEPadModuleAdapterClass;
@end
