@interface AWEOriginStickerUserView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel createdByLabel;
@property (nonatomic) UILabel creatorNameLabel;
@property (nonatomic) UILabel validateLabel;
- (void)updateWithUserModel:;
- (void)updateWithCommerceModel:;
- (id)createdByLabel;
- (id)creatorNameLabel;
- (void)setCreatedByLabel:;
- (void)setCreatorNameLabel:;
- (id)validateLabel;
- (void)setValidateLabel:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupUI;
@end
