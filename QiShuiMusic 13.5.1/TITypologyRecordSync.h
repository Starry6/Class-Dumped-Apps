@interface TITypologyRecordSync : TITypologyRecord
@property (nonatomic) TIKeyboardState keyboardState;
@property (nonatomic) TIKeyboardConfiguration keyboardConfig;
- (id)keyboardState;
- (id)shortDescription;
- (id)textSummary;
- (void)replaceDocumentState:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)keyboardConfig;
- (void)removeContextFromKeyboardState;
- (void)setKeyboardState:;
- (void)setKeyboardConfig:;
- (void)applyToStatistic:;
- (id)currentKeyboardState;
+ (BOOL)supportsSecureCoding;
@end
