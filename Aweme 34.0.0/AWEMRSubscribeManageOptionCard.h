@interface AWEMRSubscribeManageOptionCard : UIView
@property (nonatomic) AWEMRSubscribeManageOptionCardConfig config;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) DUXCheckBox checkBox;
- (id)checkBox;
- (void)setCheckBox:;
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
+ (double)suggestHeight;
+ (id)suggestImageSize;
@end
