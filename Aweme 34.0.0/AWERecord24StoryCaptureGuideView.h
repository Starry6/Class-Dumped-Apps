@interface AWERecord24StoryCaptureGuideView : UIView
@property (nonatomic) UIImageView storyLogoImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) DUXButton actionButton;
@property (nonatomic) @? clickedBlock;
- (void)setupWithConfig:;
- (void)actionButtonClicked:;
- (id)clickedBlock;
- (void)setClickedBlock:;
- (void)configClickedBlock:;
- (void)setStoryLogoImageView:;
- (id)storyLogoImageView;
- (void)setDescriptionLabel:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (id)titleLabel;
- (id)descriptionLabel;
- (id)actionButton;
- (void)setActionButton:;
@end
