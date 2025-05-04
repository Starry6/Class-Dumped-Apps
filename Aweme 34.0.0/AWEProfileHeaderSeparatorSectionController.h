@interface AWEProfileHeaderSeparatorSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (Class)cellClass;
- (BOOL)showSeparator;
@end
