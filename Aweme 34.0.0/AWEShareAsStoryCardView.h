@interface AWEShareAsStoryCardView : UIView
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) YYLabel titleLabel;
@property (nonatomic) YYLabel descriptionLabel;
- (id)initWithAvatarImage:title:description:;
- (void)setDescriptionLabel:;
- (void)setAvatarView:;
- (id)initWithDescription:;
- (id)avatarView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)descriptionLabel;
- (void)layoutSubviews;
@end
