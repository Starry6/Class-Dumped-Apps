@interface AWEMusicQueueHeaderView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel countLabel;
@property (nonatomic) UIView queueModeButton;
@property (nonatomic) UIImageView modeImage;
@property (nonatomic) UILabel modeTitle;
@property (nonatomic) <AWEMusicQueueHeaderViewDelegate> delegate;
@property (nonatomic) Q loopMode;
- (unsigned long long)loopMode;
- (void)setLoopMode:;
- (id)queueModeButton;
- (void)setModeImage:;
- (id)modeImage;
- (id)modeTitle;
- (void)didTapQueueModeButton;
- (void)setQueueModeButton:;
- (void)setModeTitle:;
- (id)delegate;
- (void)setCount:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setupView;
- (id)countLabel;
- (void)setCountLabel:;
@end
