@interface AWEIMImageWaterFallBottomView : UIView
@property (nonatomic) UIStackView contentView;
@property (nonatomic) UIButton commitConfirmButton;
@property (nonatomic) UILabel commitConfirmTipLabel;
@property (nonatomic) AWEIMImageWaterFallGroupActionView groupActionView;
@property (nonatomic) @? action;
@property (nonatomic) @? groupAction;
- (void)p_setupUI;
- (void)updateButtonStatus:;
- (id)commitConfirmButton;
- (id)commitConfirmTipLabel;
- (void)setGroupAction:;
- (id)groupActionView;
- (void)p_commit;
- (id)groupAction;
- (void)configWithTitle:tips:action:groupAction:;
- (void)setCommitConfirmButton:;
- (void)setCommitConfirmTipLabel:;
- (void)setGroupActionView:;
- (id)init;
- (id)contentView;
- (void)setAction:;
- (id)action;
- (void).cxx_destruct;
- (void)setContentView:;
@end
