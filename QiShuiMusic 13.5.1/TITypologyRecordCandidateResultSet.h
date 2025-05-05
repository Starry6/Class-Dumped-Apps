@interface TITypologyRecordCandidateResultSet : TITypologyRecord
@property (nonatomic) TIKeyboardState keyboardState;
@property (nonatomic) TIKeyboardCandidateResultSet resultSet;
- (id)keyboardState;
- (id)shortDescription;
- (void)replaceDocumentState:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)resultSet;
- (void).cxx_destruct;
- (void)removeContextFromKeyboardState;
- (void)setKeyboardState:;
- (void)setResultSet:;
- (void)applyToStatistic:;
- (id)currentKeyboardState;
+ (BOOL)supportsSecureCoding;
@end
