@interface AWEProfileHeaderVSSignatureSectionController : AWEBaseListSectionController
@property (nonatomic) NSMutableArray binds;
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)viewControllerDidAppear:;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (id)binds;
- (void)setBinds:;
- (Class)cellClass;
- (BOOL)showSeparator;
- (void).cxx_destruct;
@end
