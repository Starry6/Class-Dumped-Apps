@interface AWEPadHorizontalCellController : AWEPadListReusableViewBaseController
@property (nonatomic) AWEPadHorizontalSectionInnerViewModel innerSectionViewModel;
- (void)viewDidDisplay;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (void)viewDidEndDisplay;
- (id)viewSizeWithIndex:collectionView:;
- (id)innerSectionViewModel;
- (void)setInnerSectionViewModel:;
- (Class)viewClass;
- (void).cxx_destruct;
@end
