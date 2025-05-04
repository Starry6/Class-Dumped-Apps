@interface AWEProfileHeaderRecommendListSectionController : AWEBaseListSectionController
@property (nonatomic) NSMutableArray binds;
@property (nonatomic) <AWEProfileHeaderFollowAreaActionDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)updateFinalLayoutAttributes:forDisappearingCellAtIndex:isDeleted:;
- (void)updateInitialLayoutAttributes:forAppearingCellAtIndex:isInserted:;
- (id)binds;
- (void)setBinds:;
- (id)delegate;
- (Class)cellClass;
- (BOOL)showSeparator;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
