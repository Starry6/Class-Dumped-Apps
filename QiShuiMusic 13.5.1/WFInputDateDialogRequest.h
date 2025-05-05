@interface WFInputDateDialogRequest : WFDialogRequest
@property (nonatomic) WFDatePickerConfiguration configuration;
@property (nonatomic) NSString message;
@property (nonatomic) WFDialogButton cancelButton;
@property (nonatomic) WFDialogButton doneButton;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)configuration;
- (id)message;
- (void).cxx_destruct;
- (id)doneButton;
- (id)description;
- (id)cancelButton;
- (id)initWithDatePickerConfiguration:message:attribution:prompt:;
+ (BOOL)supportsSecureCoding;
@end
