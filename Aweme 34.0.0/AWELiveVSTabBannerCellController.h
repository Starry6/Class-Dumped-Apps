@interface AWELiveVSTabBannerCellController : NSObject
@property (nonatomic) AWELiveVSTabBannerCell cell;
@property (nonatomic) BOOL isInScreen;
@property (nonatomic) NSArray model;
@property (nonatomic) <IGListCollectionContext> collectionContext;
@property (nonatomic) q index;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerViewDidAppear;
- (void)configCell:;
- (id)collectionContext;
- (void)setIsInScreen:;
- (void)trackBannerCellShowWithEpisode:;
- (BOOL)isInScreen;
- (void)bannerView:didScrollFromIndex:toIndex:;
- (void)bannerView:didSelectedItemAtIndex:;
- (long long)bannerViewNumberOfItems:;
- (id)bannerView:cellForIndexPath:;
- (void)containerViewDidDisAppear;
- (id)sizeWithcollectionViewSize:cellContentSize:;
- (void)setCollectionContext:;
- (void)setIndex:;
- (long long)index;
- (id)initWithModel:;
- (Class)cellClass;
- (id)model;
- (void).cxx_destruct;
- (id)cell;
- (void)setCell:;
@end
