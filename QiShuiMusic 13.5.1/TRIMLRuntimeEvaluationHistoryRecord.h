@interface TRIMLRuntimeEvaluationHistoryRecord : NSObject
@property (nonatomic) TRIMLRuntimeEvaluation evaluation;
@property (nonatomic) TRIEvaluationStatus status;
- (id)copyWithReplacementStatus:;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqualToRecord:;
- (void).cxx_destruct;
- (id)description;
- (id)status;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithEvaluation:status:;
- (id)copyWithReplacementEvaluation:;
- (id)evaluation;
+ (BOOL)supportsSecureCoding;
+ (id)recordWithEvaluation:status:;
@end
