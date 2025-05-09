@interface AWEDetailCommerceDescriptionView : UIView
@property (nonatomic) <AWEDetailCommerceDescriptionViewConfiguration> configuration;
@property (nonatomic) AWEDetailCommerceDescriptionModel model;
@property (nonatomic) UIView topSeperateLine;
@property (nonatomic) YYLabel descriptionLabel;
@property (nonatomic) UIButton showMoreButton;
@property (nonatomic) UIButton showLessButton;
@property (nonatomic) <AWEDetailCommerceDescriptionViewDelegate> delegate;
- (id)showLessButton;
- (void)updateToModel:serviceProvider:;
- (id)iconButtonWithTitle:icon:;
- (void)setShowLessButton:;
- (void)didTapShowLess:;
- (void)didTapShowMore:;
- (id)topSeperateLine;
- (void)p_updateUIWithModel:;
- (id)p_attributedStringForDescriptionText:;
- (void)invalidateConstrainsWithShowMore:;
- (void)addShowMoreTruncation;
- (void)setTopSeperateLine:;
- (void)setModel:;
- (id)delegate;
- (void)setDescriptionLabel:;
- (void)setConfiguration:;
- (id)initWithFrame:configuration:;
- (id)model;
- (id)showMoreButton;
- (void).cxx_destruct;
- (id)configuration;
- (id)descriptionLabel;
- (void)setDelegate:;
- (void)setShowMoreButton:;
- (void)setupUI;
@end
