@interface AWEVideoStickerSocialItemCell : UITableViewCell
@property (nonatomic) UIView bgView;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLable;
- (void)p_setup;
- (void)updateWithHashTag:;
- (void)updateWithMention:;
- (void)updateWithHotSpot:;
- (id)subtitleLable;
- (void)p_updateTitleLableVerticalMake:isCenter:;
- (void)setSubtitleLable:;
- (void)updateWithSociaModel:;
- (void)setHighlighted:animated:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)bgView;
- (void)setBgView:;
- (id)avatarImageView;
- (void)setAvatarImageView:;
+ (double)cellHeight;
@end
