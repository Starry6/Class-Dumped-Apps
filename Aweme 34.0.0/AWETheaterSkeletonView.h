@interface AWETheaterSkeletonView : AWETheaterSkeletonBaseView
@property (nonatomic) double skeletonHeight;
@property (nonatomic) AWEShimmerView shimmerView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shimmerView;
- (void)setShimmerView:;
- (id)fakeItemViewWithRadius:;
- (double)skeletonHeight;
- (id)fakeHeaderView;
- (id)fakeHistoryView;
- (id)fakeHotLiveView;
- (id)fakeMoreFeedView;
- (id)fakeTipsLabel;
- (void)setSkeletonHeight:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)configureSubviews;
- (double)viewHeight;
@end
