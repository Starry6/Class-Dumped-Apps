@interface AKAuthorizationBulletPointSubPane : AKAuthorizationSubPane
@property (nonatomic) UIView baseView;
@property (nonatomic) UIImageView bulletImageView;
@property (nonatomic) UIStackView messageStackView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel messageLabel;
@property (nonatomic) UIImage image;
@property (nonatomic) NSString title;
@property (nonatomic) NSString message;
- (void)setMessage:;
- (void)setImage:;
- (void)setTitle:;
- (id)baseView;
- (id)title;
- (id)message;
- (void).cxx_destruct;
- (id)messageLabel;
- (id)titleLabel;
- (id)image;
- (id)_verticalStackView;
- (id)_iconColor;
- (void)addToConstraints:context:;
- (id)initWithImage:title:message:;
- (id)_labelWithString:title:;
- (id)_imageViewWithImage:;
- (id)_sizeForBulletImage:;
- (id)bulletImageView;
- (id)messageStackView;
@end
