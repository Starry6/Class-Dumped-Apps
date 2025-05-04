@interface AWEIMGroupUpgradeConfirmButtonView : UIView
@property (nonatomic) UIButton confirmButton;
@property (nonatomic) UIView<IESIMDescriptionViewProtocol> confirmTipView;
@property (nonatomic) @? confirmActionBlock;
- (void)configWithButtonTitle:tipTemplateText:templateActions:buttonClickAction:;
- (void)enableButton:;
- (void)setConfirmActionBlock:;
- (id)confirmActionBlock;
- (void)p_layoutSubViews;
- (id)confirmTipView;
- (void)__commitConfirmAction;
- (void)setConfirmTipView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)confirmButton;
- (void)setConfirmButton:;
@end
