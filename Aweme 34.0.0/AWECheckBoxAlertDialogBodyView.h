@interface AWECheckBoxAlertDialogBodyView : UIView
@property (nonatomic) DUXCheckBox checkBox;
@property (nonatomic) UILabel label;
@property (nonatomic) BOOL checked;
- (id)duxAlertDialog_view;
- (id)checkBox;
- (void)setCheckBox:;
- (void)clickLabel;
- (void)setLabel:;
- (void)setChecked:;
- (BOOL)checked;
- (id)label;
- (void)setLabelText:;
- (void).cxx_destruct;
@end
