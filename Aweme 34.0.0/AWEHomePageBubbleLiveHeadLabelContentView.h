@interface AWEHomePageBubbleLiveHeadLabelContentView : UIView
@property (nonatomic) AWEHomePageBubbleLiveHeadLabelContentConfig config;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIView<AWEFeedLiveMarkViewProtocol> liveHeadBreathView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImage placeHolder;
- (void)awe_themeDidChange:;
- (void)setupWithConfig:;
- (id)liveHeadBreathView;
- (void)setLiveHeadBreathView:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
- (void)updateImageView;
- (void)updateUI;
- (void)setPlaceHolder:;
- (id)placeHolder;
@end
