@interface AWECommentShareSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (void)configSupplementaryHeaderView:;
- (Class)cellClass;
- (double)separatorHeight;
- (id)sizeForItemAtIndex:;
- (Class)headerViewClass;
+ (Class)sectionViewModelClass;
@end
