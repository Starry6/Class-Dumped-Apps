@interface AWEDiscoverDHotspotHorizontalCellController : AWEDiscoverDHorizontalBaseCellController
@property (nonatomic) UIImageView likeImageView;
@property (nonatomic) YYLabel likeCountLabel;
@property (nonatomic) YYLabel timeLabel;
@property (nonatomic) AWEFeedVideoTagView videoTagView;
@property (nonatomic) UIView darkMaskView;
@property (nonatomic) UILabel despLabel;
- (void)cellWillDisplay;
- (void)setupSubViews;
- (id)likeImageView;
- (void)setLikeImageView:;
- (id)likeCountLabel;
- (void)updateModel:playerHeight:;
- (id)videoTagView;
- (id)darkMaskView;
- (id)despLabel;
- (void)updateAccessibilityWithModel:;
- (void)setVideoTagView:;
- (void)setDarkMaskView:;
- (void)setDespLabel:;
- (void)setLikeCountLabel:;
- (void)setTimeLabel:;
- (void).cxx_destruct;
- (id)timeLabel;
- (void)updateModel:;
+ (id)horizontalCellSizeWithModel:;
@end
