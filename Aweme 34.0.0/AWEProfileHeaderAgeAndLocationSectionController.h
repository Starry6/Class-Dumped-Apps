@interface AWEProfileHeaderAgeAndLocationSectionController : AWEBaseListSectionController
@property (nonatomic) NSMutableArray binds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)viewControllerDidAppear:;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (id)binds;
- (void)setBinds:;
- (void)trackShowProfileTagWithType:;
- (void)refreshPersonalTagHeight:;
- (void)transferToLandingPage:;
- (void)showEditProfileFromInfoButtons;
- (void)gotoSchoolStory;
- (Class)cellClass;
- (BOOL)showSeparator;
- (void).cxx_destruct;
@end
