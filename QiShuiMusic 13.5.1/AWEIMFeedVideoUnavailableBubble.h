@interface AWEIMFeedVideoUnavailableBubble : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) YYLabel subtitleLabel;
- (void)addGestures;
- (void)addSubviews;
- (void)configFramesWithModel:;
- (void)configUIDataWithModel:;
- (void)configWithModel:;
- (void)handleJumpUserProfileActionIfNeeded:tappedRange:;
- (void)setTitleLabel:;
- (id)subtitleLabel;
- (void)setSubtitleLabel:;
- (void)commonInit;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
@end
