@interface TIMecabraFacemarkCandidate : TIMecabraCandidate
@property (nonatomic) NSString category;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setCategory:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)category;
- (id)copyWithZone:;
- (BOOL)isFacemarkCandidate;
- (id)initWithCandidateResultSetCoder:;
- (void)encodeWithCandidateResultSetCoder:;
- (id)initWithCandidate:category:input:mecabraCandidatePointerValue:;
+ (BOOL)supportsSecureCoding;
+ (int)type;
+ (id)candidateWithCandidate:category:input:mecabraCandidatePointerValue:;
@end
