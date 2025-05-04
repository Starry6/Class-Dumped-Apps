@interface AWEFansListUserListSectionController : AWERelationUserListBaseSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)enterFrom;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (id)aAWERelationDOUYINHTSAdapter;
- (unsigned long long)activeUserSourceType;
- (long long)type;
- (Class)cellClass;
- (BOOL)showSeparator;
- (BOOL)isMine;
- (id)pageIdentifier;
- (Class)footerViewClass;
+ (Class)aAWERelationDOUYINHTSAdapterClass;
@end
