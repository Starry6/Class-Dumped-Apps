@interface WFConfirmInteractionDialogRequest : WFDialogRequest
@property (nonatomic) INInteraction interaction;
@property (nonatomic) WFDialogButton confirmButton;
@property (nonatomic) WFDialogButton cancelButton;
- (id)interaction;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)cancelButton;
- (id)confirmButton;
- (id)initWithInteraction:prompt:;
+ (BOOL)supportsSecureCoding;
@end
