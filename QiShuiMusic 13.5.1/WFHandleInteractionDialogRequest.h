@interface WFHandleInteractionDialogRequest : WFDialogRequest
@property (nonatomic) INInteraction interaction;
@property (nonatomic) WFDialogButton doneButton;
- (id)interaction;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)doneButton;
- (id)description;
- (id)initWithInteraction:prompt:;
- (id)initWithInteraction:attribution:;
+ (BOOL)supportsSecureCoding;
@end
