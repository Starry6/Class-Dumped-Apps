@interface AWEAdDatePickerViewController : UIViewController
@property (nonatomic) AWEDatePickerTopBar topBar;
@property (nonatomic) UIDatePicker datePicker;
@property (nonatomic) NSDateFormatter dateFormatter;
@property (nonatomic) @? didFinishPicking;
@property (nonatomic) NSDate date;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)didFinishPicking;
- (void)setDidFinishPicking:;
- (id)stringFromDate:;
- (void)setDate:;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setDateFormatter:;
- (id)dateFormatter;
- (id)initWithNibName:bundle:;
- (id)dateFromString:;
- (void).cxx_destruct;
- (id)topBar;
- (void)setTopBar:;
- (id)date;
- (id)datePicker;
- (void)setDatePicker:;
- (void)datePickerValueChanged:;
- (void)doneButtonAction:;
@end
