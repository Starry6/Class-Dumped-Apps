@interface AWEIMFeedVideoUnavailableBubble : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) YYLabel subtitleLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithModel:;
- (void)addSubviews;
- (void)addGestures;
- (void)handleJumpUserProfileActionIfNeeded:tappedRange:;
- (void)configUIDataWithModel:;
- (void)configFramesWithModel:;
- (id)initWithFrame:;
- (void)setSubtitleLabel:;
- (void)commonInit;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
@end
