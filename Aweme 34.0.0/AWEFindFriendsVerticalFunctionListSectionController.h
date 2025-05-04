@interface AWEFindFriendsVerticalFunctionListSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryHeaderView:;
- (id)customHeaderIdentifier;
- (id)separatorColor;
- (Class)cellClass;
- (BOOL)showSeparator;
- (double)separatorHeight;
- (Class)headerViewClass;
@end
