@interface AWEFindFriendsContactsSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (Class)cellClass;
- (BOOL)showSeparator;
+ (Class)sectionViewModelClass;
@end
