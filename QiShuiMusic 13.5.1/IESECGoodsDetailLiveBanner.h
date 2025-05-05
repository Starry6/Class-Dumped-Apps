@interface IESECGoodsDetailLiveBanner : UIView
@property (nonatomic) IESECUIImageView avatarImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) IESECGoodsDetailParameters parameters;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeWithParameters:;
- (id)initWithFrame:;
- (id)parameters;
- (void).cxx_destruct;
- (void)setParameters:;
- (id)nameLabel;
- (void)setNameLabel:;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)handleTap;
@end
