@interface OBSimplePasscodeInputView : OBPasscodeInputView
@property (nonatomic) OBPasscodeField passcodeField;
@property (nonatomic) BOOL limitCharactersToNumbers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)passcode;
- (void).cxx_destruct;
- (void)setPasscode:;
- (void)passcodeField:enteredPasscode:;
- (id)initWithFrame:numberOfEntryFields:;
- (id)passcodeDisplayView;
- (BOOL)limitCharactersToNumbers;
- (void)setLimitCharactersToNumbers:;
- (id)passcodeField;
- (void)setPasscodeField:;
@end
