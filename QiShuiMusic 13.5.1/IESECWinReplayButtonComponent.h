@interface IESECWinReplayButtonComponent : UIView
@property (nonatomic) IESECButton replayButton;
@property (nonatomic) NSString buttonText;
@property (nonatomic) @? clickReplayButtonBlock;
- (id)clickReplayButtonBlock;
- (void)didTapReplayButton;
- (void)p_setupUI;
- (void)setClickReplayButtonBlock:;
- (void)updateUIWithModel:;
- (id)init;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setButtonText:;
- (id)replayButton;
- (void)setReplayButton:;
+ (id)replayButtonWithButtonSize:padding:iconSize:textFontSize:iconTextSpacing:backgroundColor:;
@end
