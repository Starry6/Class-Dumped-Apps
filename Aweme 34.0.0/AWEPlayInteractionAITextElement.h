@interface AWEPlayInteractionAITextElement : AWEPlayInteractionLeftElement
@property (nonatomic) UILabel aiTextLabel;
@property (nonatomic) UIImageView iconImageV;
@property (nonatomic) UIImageView arrowImageV;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIView gradientBackground;
@property (nonatomic) CAGradientLayer gradient;
@property (nonatomic) UIView aiTextEntranceView;
- (id)activateInfoWithData:;
- (void)setIconImageV:;
- (id)iconImageV;
- (void)setupNewTagStyle;
- (void)onAITextEntranceViewClicked:;
- (id)aiTextEntranceView;
- (id)gradientBackground;
- (id)aiTextLabel;
- (id)arrowImageV;
- (BOOL)shouldAITextActiveWithData:context:;
- (void)setAiTextEntranceView:;
- (void)setAiTextLabel:;
- (void)setArrowImageV:;
- (void)setGradientBackground:;
- (void)setGradient:;
- (id)gradient;
- (void)viewDidLoad;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
@end
