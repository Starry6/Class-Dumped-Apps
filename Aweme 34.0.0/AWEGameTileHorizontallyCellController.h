@interface AWEGameTileHorizontallyCellController : AWEGameBaseCellController
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (Class)viewClass;
@end
