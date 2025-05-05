@interface IESLiveAdminSwitchCell : IESLiveAdminCell
@property (nonatomic) UISwitch switchView;
@property (nonatomic) UIControl controlView;
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
