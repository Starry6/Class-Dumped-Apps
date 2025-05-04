@interface AWEPLVDetailMoreHeaderController : AWEPadListReusableViewBaseController
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
- (id)sectionViewModel;
- (void)setSectionViewModel:;
- (void)trackClickMoreButton;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (void)handleTapMoreButton;
- (void)routeDetailVideoViewController;
- (Class)viewClass;
- (void).cxx_destruct;
@end
