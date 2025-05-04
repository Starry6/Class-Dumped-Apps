@interface AWEVideoHallBannerSectionController : AWEBaseListSectionController
@property (nonatomic) AWEVideoHallPageContext context;
@property (nonatomic) AWELVideoHallTracker tracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)trackLVideoShowWithIndex:bannerStyle:;
- (id)bannerTrackerParamsWithIndex:bannerStyle:;
- (id)init;
- (id)tracker;
- (id)bannerStyle;
- (Class)cellClass;
- (void)setTracker:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
+ (id)cellSize;
@end
