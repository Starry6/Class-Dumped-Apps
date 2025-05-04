@interface AWEECMallSegmentedIndicator : UIView
@property (nonatomic) UIView liveView;
@property (nonatomic) UIImageView waveImageView;
@property (nonatomic) UIColor indicatorColor;
@property (nonatomic) q displayStyle;
- (void)initializeData;
- (id)waveImageView;
- (BOOL)isColor:equalToColor:;
- (void)setWaveImageView:;
- (void)setDisplayStyle:;
- (id)initWithFrame:;
- (id)indicatorColor;
- (long long)displayStyle;
- (void)setIndicatorColor:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:;
- (void)initializeViews;
- (id)liveView;
- (void)setLiveView:;
@end
