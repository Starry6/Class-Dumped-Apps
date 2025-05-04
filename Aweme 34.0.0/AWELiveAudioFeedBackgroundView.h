@interface AWELiveAudioFeedBackgroundView : UIView
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) UIView blackMask;
@property (nonatomic) AWELiveAudioFeedViewModel viewModel;
- (void)bindViewModel:;
- (id)blackMask;
- (void)displayBackgroundImage:;
- (void)setBlackMask:;
- (id)viewModel;
- (void)setup;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (void)setBackgroundImageView:;
- (id)initWithFrame:viewModel:;
@end
