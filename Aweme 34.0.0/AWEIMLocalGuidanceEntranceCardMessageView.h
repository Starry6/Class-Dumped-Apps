@interface AWEIMLocalGuidanceEntranceCardMessageView : UIView
@property (nonatomic) AWEIMLocalGuidanceEntranceCardMessageProps props;
@property (nonatomic) UIView cardView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIImageView avatarImageView;
- (void)p_addGesture;
- (void)p_addSubviews;
- (void)updateWithProps:;
- (void)p_addConstraint;
- (void)p_onTap:;
- (id)props;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)avatarImageView;
- (id)cardView;
- (void)setAvatarImageView:;
- (void)setCardView:;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)setProps:;
@end
