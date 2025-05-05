@interface TITypologyRecordKeyboardInput : TITypologyRecord
@property (nonatomic) TIKeyboardInput input;
@property (nonatomic) TIKeyboardState keyboardState;
@property (nonatomic) TIKeyboardOutput output;
@property (nonatomic) TIKeyboardConfiguration keyboardConfig;
- (id)output;
- (id)keyboardState;
- (id)input;
- (id)shortDescription;
- (id)textSummary;
- (void)replaceDocumentState:;
- (void)setInput:;
- (void)setOutput:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)keyboardConfig;
- (void)removeContextFromKeyboardState;
- (void)setKeyboardState:;
- (void)setKeyboardConfig:;
- (void)applyToStatistic:;
- (id)currentKeyboardState;
- (id)changedText;
+ (BOOL)supportsSecureCoding;
@end
