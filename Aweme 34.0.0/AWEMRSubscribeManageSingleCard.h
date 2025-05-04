@interface AWEMRSubscribeManageSingleCard : UIView
@property (nonatomic) AWEMRSubscribeManageSingleCardConfig config;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
- (void)setConfig:;
- (void)updateWithConfig:;
- (id)config;
- (id)initWithFrame:;
- (void)setup;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
@end
