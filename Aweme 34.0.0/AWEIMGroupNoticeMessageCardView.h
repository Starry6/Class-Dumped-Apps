@interface AWEIMGroupNoticeMessageCardView : UIView
@property (nonatomic) UIImageView cardAvatarImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) AWEIMMessageUIExtraInfo messageUIExtraInfo;
@property (nonatomic) @? tapActionBlock;
- (id)tapActionBlock;
- (void)setTapActionBlock:;
- (void)configWithMessage:;
- (void)setupCardView;
- (void)setMessageUIExtraInfo:;
- (id)messageUIExtraInfo;
- (id)cardAvatarImageView;
- (void)setCardAvatarImageView:;
- (void)onTapCard;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)updateBackgroundColor:;
@end
