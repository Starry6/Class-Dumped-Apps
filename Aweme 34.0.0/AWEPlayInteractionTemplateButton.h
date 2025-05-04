@interface AWEPlayInteractionTemplateButton : UIView
@property (nonatomic) AWEPlayInteractionTemplateButtonConfig config;
@property (nonatomic) DUXButton button;
- (void)playFlashAnimation;
- (void)btnClicked:;
- (void)handleIcon;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void)setButton:;
- (void).cxx_destruct;
- (id)button;
- (void)setupButton;
@end
