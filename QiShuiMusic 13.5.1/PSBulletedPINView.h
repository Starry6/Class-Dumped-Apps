@interface PSBulletedPINView : PINView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)layoutSubviews;
- (void)appendString:;
- (BOOL)isFirstResponder;
- (void)setStringValue:;
- (id)initWithFrame:;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (id)stringValue;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (void)deleteLastCharacter;
- (void)setBlocked:;
- (void)passcodeField:enteredPasscode:;
- (void)hidePasscodeField:;
- (void)notifyDelegatePINChanged;
- (void)notifyDelegatePINEntered;
- (id)initWithFrame:numberOfFields:;
@end
