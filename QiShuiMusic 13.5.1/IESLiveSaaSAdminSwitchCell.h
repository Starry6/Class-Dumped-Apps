@interface IESLiveSaaSAdminSwitchCell : IESLiveSaaSAdminCell
@property (nonatomic) UIControl controlView;
@property (nonatomic) UISwitch switchView;
- (void)renderWithItem:;
- (id)initWithStyle:reuseIdentifier:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)controlView;
- (void)setControlView:;
- (id)switchView;
- (void)setSwitchView:;
- (void)toggleAction;
@end
