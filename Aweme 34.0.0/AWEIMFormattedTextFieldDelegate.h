@interface AWEIMFormattedTextFieldDelegate : NSObject
@property (nonatomic) <UITextFieldDelegate> textFieldDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)textFieldDidEndEditing:;
- (BOOL)textFieldShouldClear:;
- (BOOL)textFieldShouldReturn:;
- (void).cxx_destruct;
- (BOOL)textFieldShouldBeginEditing:;
- (void)textFieldDidBeginEditing:;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (BOOL)textFieldShouldEndEditing:;
- (void)setTextFieldDelegate:;
- (id)textFieldDelegate;
@end
