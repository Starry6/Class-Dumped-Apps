@interface TITypologyRecordAutocorrections : TITypologyRecord
@property (nonatomic) TIKeyboardState keyboardState;
@property (nonatomic) TICandidateRequestToken requestToken;
@property (nonatomic) TIAutocorrectionList autocorrections;
@property (nonatomic) BOOL listUIDisplayed;
- (id)keyboardState;
- (id)shortDescription;
- (void)replaceDocumentState:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)removeContextFromKeyboardState;
- (void)setKeyboardState:;
- (void)applyToStatistic:;
- (id)currentKeyboardState;
- (id)requestToken;
- (void)setRequestToken:;
- (id)autocorrections;
- (void)setAutocorrections:;
- (BOOL)listUIDisplayed;
- (void)setListUIDisplayed:;
+ (BOOL)supportsSecureCoding;
@end
