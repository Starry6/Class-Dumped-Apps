@interface AWETeenPhoneLogic : NSObject
@property (nonatomic) <UITextFieldDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)textFieldDidEndEditing:;
- (BOOL)textFieldShouldClear:;
- (id)delegate;
- (BOOL)textFieldShouldReturn:;
- (void).cxx_destruct;
- (BOOL)textFieldShouldBeginEditing:;
- (void)setDelegate:;
- (void)textFieldDidBeginEditing:;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (BOOL)textFieldShouldEndEditing:;
+ (void)selectTextForInput:atRange:;
+ (long long)pushCaretPosition:range:;
+ (void)applyFormat:forText:;
+ (void)popCaretPosition:range:caretPosition:;
+ (BOOL)logicTextField:shouldChangeCharactersInRange:replacementString:;
@end
