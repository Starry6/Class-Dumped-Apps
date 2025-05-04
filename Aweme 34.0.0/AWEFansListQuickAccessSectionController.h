@interface AWEFansListQuickAccessSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)separatorColor;
- (id)sectionBackgroundColor;
- (Class)cellClass;
@end
