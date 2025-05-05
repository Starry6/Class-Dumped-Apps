@interface WFShowAlertDialogRequest : WFDialogRequest
@property (nonatomic) NSString message;
@property (nonatomic) WFDialogButton okButton;
@property (nonatomic) WFDialogButton cancelButton;
- (id)initWithCoder:;
- (id)okButton;
- (void)encodeWithCoder:;
- (id)message;
- (void).cxx_destruct;
- (id)description;
- (id)cancelButton;
- (id)initWithPrompt:message:cancelButton:attribution:;
- (id)initWithPrompt:message:okButton:cancelButton:attribution:;
+ (BOOL)supportsSecureCoding;
@end
