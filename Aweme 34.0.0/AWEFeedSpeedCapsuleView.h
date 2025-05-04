@interface AWEFeedSpeedCapsuleView : UIView
@property (nonatomic) UIImageView closeButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) <AWEFeedSpeedCapsuleViewPlaybackRateDelegate> delegate;
- (void)handleCloseButtonClick;
- (id)delegate;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
@end
