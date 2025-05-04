@interface AWETeenAutoPlayFloatButton : UIView
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) AWETeenAutoPlaySwitchView switchView;
@property (nonatomic) @? onButtonClicked;
- (id)onButtonClicked;
- (void)setOnButtonClicked:;
- (void)updateViewWithAutoPlayState:animated:;
- (void)updatePlayTimeTip:withText:autoPlayState:;
- (void)autoPlayFloatingButtonTapped:;
- (id)buttonSize;
- (id)init;
- (void)setBackgroundView:;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setTipLabel:;
- (id)tipLabel;
- (void)setupUI;
- (void)setSwitchView:;
- (id)switchView;
@end
