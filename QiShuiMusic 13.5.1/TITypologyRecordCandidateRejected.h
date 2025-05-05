@interface TITypologyRecordCandidateRejected : TITypologyRecord
@property (nonatomic) TIKeyboardCandidate candidate;
- (id)shortDescription;
- (void)setCandidate:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)candidate;
- (void)applyToStatistic:;
+ (BOOL)supportsSecureCoding;
@end
