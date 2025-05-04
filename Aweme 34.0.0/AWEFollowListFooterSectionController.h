@interface AWEFollowListFooterSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)viewControllerDidAppear:;
- (void)didSelectItemAtIndex:model:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (id)aAWERelationDOUYINHTSAdapter;
- (id)separatorColor;
- (id)sectionBackgroundColor;
- (BOOL)isMine;
+ (Class)sectionViewModelClass;
+ (Class)aAWERelationDOUYINHTSAdapterClass;
@end
