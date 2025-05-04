@interface AWEProfileHeaderUpstairHintSectionController : AWEBaseListSectionController
@property (nonatomic) <AWEProfileHeaderUpstairHintActionDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)viewControllerDidAppear:;
- (void)viewControllerDidDisappear:;
- (void)didSelectItemAtIndex:model:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (void)sectionWillDisplayCell:;
- (void)updateNavBtnAlpha:;
- (BOOL)isCurrentViewControllerSticky;
- (void)sectionDidEndDisplayingCell:;
- (id)delegate;
- (Class)cellClass;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
