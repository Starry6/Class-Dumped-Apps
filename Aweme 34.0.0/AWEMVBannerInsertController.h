@interface AWEMVBannerInsertController : AWEDCFeedBaseController
@property (nonatomic) Q loadMoreCount;
@property (nonatomic) NSMutableArray bannerShowIds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerBeforeViewDidLoad;
- (void)containerCollectionView:willDisplayCell:forItemAtIndexPath:;
- (unsigned long long)loadMoreCount;
- (void)setLoadMoreCount:;
- (id)getMVPageContext;
- (void)setBannerShowIds:;
- (BOOL)bannerHadShowedWithModel:;
- (BOOL)shouldPreventBannerInsertInFirstFetch:;
- (id)bannerShowIds;
- (id)forceInsertItemsWithContext:;
- (void).cxx_destruct;
- (void)containerViewDidLoad;
@end
