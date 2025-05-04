@interface AWENearbyC2FeedSkeletonView : UIView
@property (nonatomic) AWENearbySkeletonView headImgHolder;
@property (nonatomic) UIView whiteBGView;
@property (nonatomic) AWENearbySkeletonView firstLineHolder;
@property (nonatomic) AWENearbySkeletonView secondLineHolder;
- (id)whiteBGView;
- (id)headImgHolder;
- (id)firstLineHolder;
- (id)secondLineHolder;
- (void)setHeadImgHolder:;
- (void)setWhiteBGView:;
- (void)setFirstLineHolder:;
- (void)setSecondLineHolder:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setupUI;
@end
