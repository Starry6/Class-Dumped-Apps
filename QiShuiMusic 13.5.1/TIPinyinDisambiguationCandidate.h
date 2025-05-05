@interface TIPinyinDisambiguationCandidate : TIKeyboardCandidateSingle
@property (nonatomic) BOOL generatedByChoosePinyin;
- (void)setLabel:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)label;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setGeneratedByChoosePinyin:;
- (id)initWithCandidateResultSetCoder:;
- (void)encodeWithCandidateResultSetCoder:;
- (id)initWithPinyinSyllable:;
- (BOOL)isGeneratedByChoosePinyin;
+ (BOOL)supportsSecureCoding;
+ (int)type;
+ (id)candidateWithPinyinSyllable:;
@end
