@interface AWEBatManChangeHUDView : UIView
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIButton changeButton;
@property (nonatomic) UIView bottomBar;
@property (nonatomic) @? changeActionBlock;
- (void)setChangeActionBlock:;
- (void)changeAction;
- (id)changeActionBlock;
- (id)intrinsicContentSize;
- (void)setBottomBar:;
- (id)initWithFrame:;
- (id)bottomBar;
- (void).cxx_destruct;
- (void)setTipLabel:;
- (id)tipLabel;
- (id)changeButton;
- (void)setChangeButton:;
@end
