@interface TITypologyRecordRefinements : TITypologyRecord
@property (nonatomic) TIKeyboardCandidate candidate;
@property (nonatomic) TIKeyboardState keyboardState;
@property (nonatomic) TIAutocorrectionList refinements;
- (id)keyboardState;
- (id)shortDescription;
- (void)replaceDocumentState:;
- (void)setCandidate:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)removeContextFromKeyboardState;
- (void)setKeyboardState:;
- (id)candidate;
- (void)applyToStatistic:;
- (id)currentKeyboardState;
- (id)refinements;
- (void)setRefinements:;
+ (BOOL)supportsSecureCoding;
@end
