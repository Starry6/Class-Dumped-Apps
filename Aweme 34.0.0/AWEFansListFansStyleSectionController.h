@interface AWEFansListFansStyleSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)separatorColor;
- (id)sectionBackgroundColor;
- (Class)cellClass;
- (BOOL)showSeparator;
@end
