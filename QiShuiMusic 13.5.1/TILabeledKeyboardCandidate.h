@interface TILabeledKeyboardCandidate : TIKeyboardCandidateSingle
@property (nonatomic) NSString label;
- (void)setLabel:;
- (id)initWithCoder:;
- (id)label;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithCandidateResultSetCoder:;
- (void)encodeWithCandidateResultSetCoder:;
- (BOOL)isTransliterationCandidate;
- (id)initWithCandidate:forInput:label:;
- (id)initWithCandidate:forInput:label:transliterationType:;
+ (BOOL)supportsSecureCoding;
+ (int)type;
@end
