@interface AWEIMMuteSettingsRowView : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) UISwitch switchView;
@property (nonatomic) CALayer line;
@property (nonatomic) <AWEIMMuteSettingsRowViewDelegate> delegate;
@property (nonatomic) AWEIMMuteSettingsItem item;
- (void)__setupDefaultUI;
- (void)__handleSwitchViewDidChanged:;
- (void)setLabel:;
- (id)initWithTitle:;
- (id)delegate;
- (void)setItem:;
- (id)item;
- (id)label;
- (id)line;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)initWithItem:;
- (void)setLine:;
- (void)setSwitchView:;
- (id)switchView;
+ (id)viewWithTitle:;
+ (id)viewWithItem:;
@end
