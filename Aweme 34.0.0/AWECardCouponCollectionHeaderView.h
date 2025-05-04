@interface AWECardCouponCollectionHeaderView : UICollectionReusableView
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
- (void)refreshWithModel:;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (id)avatarView;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (void)setupViews;
+ (id)identifier;
@end
