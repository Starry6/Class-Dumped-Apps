@interface TITypologyRecordSkipHitTest : TITypologyRecord
@property (nonatomic) TIKeyboardTouchEvent touchEvent;
@property (nonatomic) TIKeyboardState keyboardState;
@property (nonatomic) TIKeyboardLayout keyLayout;
- (id)keyboardState;
- (id)shortDescription;
- (void)replaceDocumentState:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)removeContextFromKeyboardState;
- (id)keyLayout;
- (void)setKeyboardState:;
- (void)setKeyLayout:;
- (void)applyToStatistic:;
- (id)currentKeyboardState;
- (id)touchEvent;
- (void)setTouchEvent:;
+ (BOOL)supportsSecureCoding;
@end
