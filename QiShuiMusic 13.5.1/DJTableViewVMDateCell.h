@interface DJTableViewVMDateCell : DJTableViewVMChooseBaseCell
@property (nonatomic) UIDatePicker datePicker;
@property (nonatomic) NSDateFormatter dateFormatter;
@property (nonatomic) DJTableViewVMDateRow rowVM;
- (void)cellDidLoad;
- (void)cellWillAppear;
- (void)onDateValueChanged:;
- (id)dateFormatter;
- (void)updateWithValue:;
- (void).cxx_destruct;
- (void)setDateFormatter:;
- (id)datePicker;
- (void)setDatePicker:;
@end
