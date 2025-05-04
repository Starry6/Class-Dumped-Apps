@interface AWEFollowFeedRecommendVideoListContainerView : UIView
@property (nonatomic) BOOL isBigCardStyle;
@property (nonatomic) @? videoItemViewTappedBlock;
@property (nonatomic) NSMutableArray itemViews;
@property (nonatomic) double itemWidth;
- (id)aAWEPadModuleAdapter;
- (void)setIsBigCardStyle:;
- (BOOL)isBigCardStyle;
- (id)videoItemViewTappedBlock;
- (void)configWithVideoList:itemWidth:padding:;
- (void)setVideoItemViewTappedBlock:;
- (void)setItemWidth:;
- (id)initWithFrame:;
- (double)itemWidth;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)itemViews;
- (void)setItemViews:;
+ (Class)aAWEPadModuleAdapterClass;
@end
