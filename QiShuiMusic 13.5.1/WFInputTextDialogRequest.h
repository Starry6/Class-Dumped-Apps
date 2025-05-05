@interface WFInputTextDialogRequest : WFDialogRequest
@property (nonatomic) WFTextFieldConfiguration textFieldConfiguration;
@property (nonatomic) NSString message;
@property (nonatomic) WFDialogButton cancelButton;
@property (nonatomic) WFDialogButton doneButton;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)message;
- (void).cxx_destruct;
- (id)doneButton;
- (id)description;
- (id)cancelButton;
- (id)initWithTextFieldConfiguration:message:attribution:prompt:;
- (id)textFieldConfiguration;
+ (BOOL)supportsSecureCoding;
@end
