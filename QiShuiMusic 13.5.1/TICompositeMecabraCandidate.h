@interface TICompositeMecabraCandidate : TIMecabraCandidate
@property (nonatomic) NSString remainderCandidateString;
@property (nonatomic) NSArray autoconvertedCandidatePointerValues;
- (id)initWithCoder:;
- (id)label;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithCandidateResultSetCoder:;
- (void)encodeWithCandidateResultSetCoder:;
- (id)remainderCandidateString;
- (void)setRemainderCandidateString:;
- (id)autoconvertedCandidatePointerValues;
- (void)setAutoconvertedCandidatePointerValues:;
+ (BOOL)supportsSecureCoding;
+ (int)type;
@end
