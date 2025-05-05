@interface TIHandwritingCandidate : TIKeyboardCandidateSingle
@property (nonatomic) Q uniqueID;
@property (nonatomic) Q completionUniqueID;
- (unsigned long long)uniqueID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (BOOL)isInlineCompletionCandidate;
- (BOOL)isCompletionCandidate;
- (id)initWithCandidateResultSetCoder:;
- (void)encodeWithCandidateResultSetCoder:;
- (id)initWithCandidate:forInput:uniqueID:completionUniqueID:;
- (unsigned long long)completionUniqueID;
+ (BOOL)supportsSecureCoding;
+ (int)type;
@end
