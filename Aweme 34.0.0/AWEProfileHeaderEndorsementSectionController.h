@interface AWEProfileHeaderEndorsementSectionController : AWEBaseListSectionController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)viewControllerDidAppear:;
- (void)viewControllerDidDisappear:;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (void)trackEventWithTag:infoModel:;
- (void)trackRelationEventWithTag:infoModel:;
- (BOOL)isAssiUserWithIds:;
- (BOOL)isProUserWithIds:;
- (Class)cellClass;
- (BOOL)showSeparator;
@end
