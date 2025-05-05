@interface PuzzleSecureBannerView : UIView
@property (nonatomic) NSString bannerText;
@property (nonatomic) UIImageView iconImage;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) @? closeHandler;
- (void)__closeButtonClicked:;
- (id)closeHandler;
- (id)initWithBannerText:;
- (void)setCloseHandler:;
- (id)textLabel;
- (void)setIconImage:;
- (void).cxx_destruct;
- (id)iconImage;
- (void)setTextLabel:;
- (id)closeButton;
- (void)setCloseButton:;
- (id)bannerText;
- (void)setBannerText:;
@end
