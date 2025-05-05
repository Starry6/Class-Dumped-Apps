@interface IESECommercePlayerView : UIView
@property (nonatomic) UIImageView playerImageView;
@property (nonatomic) NSString playerImageName;
@property (nonatomic) NSString pauseImageName;
@property (nonatomic) BOOL isPlaying;
- (id)playerImageView;
- (id)playerImageName;
- (id)pauseImageName;
- (void)setPauseImageName:;
- (void)setPlayerImageName:;
- (void)setPlayerImageView:;
- (void)setPlayerViewImageName:pauseImageName:isPlaying:;
- (void)setUpSubViews;
- (void)updatePlayerViewBackgroundColor:;
- (BOOL)isPlaying;
- (void)setIsPlaying:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
