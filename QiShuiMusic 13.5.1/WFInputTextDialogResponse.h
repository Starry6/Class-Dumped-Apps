@interface WFInputTextDialogResponse : WFDialogResponse
@property (nonatomic) NSString inputtedText;
- (id)initWithBSXPCCoder:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:;
- (id)description;
- (id)initWithResponseCode:;
- (id)initWithInputtedText:cancelled:;
- (id)inputtedText;
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
@end
