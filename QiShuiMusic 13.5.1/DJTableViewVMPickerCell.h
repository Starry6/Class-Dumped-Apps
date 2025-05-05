@interface DJTableViewVMPickerCell : DJTableViewVMChooseBaseCell
@property (nonatomic) UIView holderView;
@property (nonatomic) UIPickerView pickerView;
@property (nonatomic) DJTableViewVMPickerRow rowVM;
- (void)cellDidLoad;
- (void)cellWillAppear;
- (id)holderView;
- (void)setHolderView:;
- (void)setSelected:animated:;
- (void)updateWithValue:;
- (void).cxx_destruct;
- (id)pickerView;
- (void)setPickerView:;
@end
