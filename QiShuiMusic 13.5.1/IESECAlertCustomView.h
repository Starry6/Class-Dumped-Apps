@interface IESECAlertCustomView : UIView
@property (nonatomic) UILabel mainLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UIImageView imageView;
- (void)setupUIWithConfig:;
- (id)initWithConfig:;
- (void)setDescriptionLabel:;
- (id)initWithFrame:;
- (id)descriptionLabel;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (id)mainLabel;
- (void)setMainLabel:;
@end
