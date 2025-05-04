@interface AWEProfileHeaderTopCornerSeparatorSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)viewControllerDidAppear:;
- (void)viewControllerDidDisappear:;
- (Class)cellClass;
@end
