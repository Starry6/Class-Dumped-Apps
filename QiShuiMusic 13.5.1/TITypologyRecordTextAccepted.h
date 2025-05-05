@interface TITypologyRecordTextAccepted : TITypologyRecord
@property (nonatomic) TIKeyboardCandidate candidate;
- (id)shortDescription;
- (id)textSummary;
- (void)setCandidate:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)candidate;
- (void)applyToStatistic:;
- (id)changedText;
+ (BOOL)supportsSecureCoding;
@end
