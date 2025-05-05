@interface TITypologyRecordHitTest : TITypologyRecord
@property (nonatomic) TIKeyboardTouchEvent touchEvent;
@property (nonatomic) TIKeyboardState keyboardState;
@property (nonatomic) TIKeyboardLayout keyLayout;
@property (nonatomic) q keyCode;
- (id)keyboardState;
- (id)shortDescription;
- (void)replaceDocumentState:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)keyCode;
- (void).cxx_destruct;
- (void)removeContextFromKeyboardState;
- (id)keyLayout;
- (void)setKeyboardState:;
- (void)setKeyLayout:;
- (void)applyToStatistic:;
- (id)currentKeyboardState;
- (id)touchEvent;
- (void)setTouchEvent:;
- (void)setKeyCode:;
+ (BOOL)supportsSecureCoding;
@end
