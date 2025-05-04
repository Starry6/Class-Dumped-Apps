@interface AWEFollowListEntranceSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)separatorColor;
- (id)sectionBackgroundColor;
+ (Class)sectionViewModelClass;
@end
