@interface IESLiveSaaSAudienceDegradeClarityHintView : UIView
@property (nonatomic) UILabel hintLabel;
@property (nonatomic) UIButton lowerLevelButton;
@property (nonatomic) @? onclickDegradeButtonBlock;
- (id)lowerLevelButton;
- (void)onclickButton:;
- (id)onclickDegradeButtonBlock;
- (void)setLowerLevelButton:;
- (void)setOnclickDegradeButtonBlock:;
- (void)updateTextWithQuality:;
- (id)hitTest:withEvent:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)hintLabel;
- (void)setHintLabel:;
@end
