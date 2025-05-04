@interface AWECutSameTipView : UIView
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) ACCButton clickButton;
@property (nonatomic) ACCButton closeButton;
@property (nonatomic) @? tapBlock;
- (void)setTapBlock:;
- (id)tapBlock;
- (void)setClickButton:;
- (id)clickButton;
- (void)updateCutSameTitlte:;
- (id)initWithFrame:;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setTipLabel:;
- (id)tipLabel;
- (void)setupViews;
- (void)setCloseButton:;
- (id)closeButton;
- (void)didTap;
@end
