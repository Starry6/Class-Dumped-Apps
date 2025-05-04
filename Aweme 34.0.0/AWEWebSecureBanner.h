@interface AWEWebSecureBanner : UIView
@property (nonatomic) NSString bannerText;
@property (nonatomic) UIImageView iconImage;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) <AWEWebSecureBannerDelegate> delegate;
- (id)initWithBannerText:;
- (void)__closeButtonClicked:;
- (id)textLabel;
- (id)iconImage;
- (id)delegate;
- (void)setIconImage:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setTextLabel:;
- (void)setCloseButton:;
- (id)closeButton;
- (id)bannerText;
- (void)setBannerText:;
@end
