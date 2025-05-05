@interface TITypologyRecordAcceptedCandidate : TITypologyRecord
@property (nonatomic) TIKeyboardCandidate candidate;
@property (nonatomic) TIKeyboardState keyboardState;
@property (nonatomic) TIKeyboardConfiguration keyboardConfig;
@property (nonatomic) NSString textToCommit;
- (id)keyboardState;
- (id)shortDescription;
- (id)textSummary;
- (void)replaceDocumentState:;
- (void)setCandidate:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)keyboardConfig;
- (void)removeContextFromKeyboardState;
- (void)setKeyboardState:;
- (id)candidate;
- (void)setKeyboardConfig:;
- (void)applyToStatistic:;
- (id)currentKeyboardState;
- (id)textToCommit;
- (void)setTextToCommit:;
- (id)changedText;
+ (BOOL)supportsSecureCoding;
@end
