@interface AWETeenAlbumCollectListSectionController : AWEBaseListSectionController
@property (nonatomic) AWETeenAlbumCollectListViewController collectListViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)enterFrom;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (void)viewControllerDidDisappear:;
- (long long)waterfallColumnCount;
- (void)didSelectItemAtIndex:model:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (void)updateWatchedAlbumModel:;
- (id)collectListViewController;
- (void)setCollectListViewController:;
- (id)separatorColor;
- (id)init;
- (void)dealloc;
- (id)sectionBackgroundColor;
- (Class)cellClass;
- (void).cxx_destruct;
@end
