@interface TRIMLRuntimeActiveEvaluationTuple : NSObject
@property (nonatomic) TRIMLRuntimeEvaluation eval;
@property (nonatomic) TRIFactorsState factorsState;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithEval:factorsState:;
- (id)copyWithReplacementEval:;
- (id)copyWithReplacementFactorsState:;
- (BOOL)isEqualToTuple:;
- (id)eval;
- (id)factorsState;
+ (BOOL)supportsSecureCoding;
+ (id)tupleWithEval:factorsState:;
@end
