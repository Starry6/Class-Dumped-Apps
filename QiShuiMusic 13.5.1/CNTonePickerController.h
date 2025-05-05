@interface CNTonePickerController : UINavigationController
@property (nonatomic) TKTonePickerViewController tonePicker;
@property (nonatomic) <CNPickerControllerDelegate> delegate;
- (void).cxx_destruct;
- (void)doneButton:;
- (void)cancelButton:;
- (id)initWithAlertType:activityAlert:;
- (id)tonePicker;
- (void)setTonePicker:;
@end
