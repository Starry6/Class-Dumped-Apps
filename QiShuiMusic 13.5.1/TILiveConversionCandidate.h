@interface TILiveConversionCandidate : TIMecabraCandidate
@property (nonatomic) BOOL inlineCandidate;
@property (nonatomic) BOOL partialCandidate;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)label;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)candidate;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isInlineCandidate;
- (id)initWithCandidateResultSetCoder:;
- (void)encodeWithCandidateResultSetCoder:;
- (BOOL)isPartialCandidate;
- (void)setInlineCandidate:;
- (void)setPartialCandidate:;
- (id)initWithSurface:input:candidate:mecabraCandidatePointerValue:;
+ (BOOL)supportsSecureCoding;
+ (int)type;
@end
