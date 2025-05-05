@interface TITypologyRecordGroupMarker : TITypologyRecord
@property (nonatomic) TIKeyboardState keyboardState;
@property (nonatomic) NSString textChange;
- (id)keyboardState;
- (id)shortDescription;
- (void)replaceDocumentState:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setTextChange:;
- (void).cxx_destruct;
- (void)removeContextFromKeyboardState;
- (void)setKeyboardState:;
- (id)textChange;
- (id)currentKeyboardState;
+ (BOOL)supportsSecureCoding;
@end
