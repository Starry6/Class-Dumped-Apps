@interface DJTableViewVMBoolCell : DJTableViewVMCell
@property (nonatomic) UISwitch switchView;
@property (nonatomic) DJTableViewVMBoolRow rowVM;
- (void)cellDidLoad;
- (void)cellWillAppear;
- (void)valueDidChanged:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)switchView;
- (void)setSwitchView:;
@end
