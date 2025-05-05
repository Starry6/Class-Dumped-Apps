@interface BMDSLBaseCodable : NSObject
@property (nonatomic) BOOL evaluationBlocked;
@property (nonatomic) BOOL allowsEvaluation;
@property (nonatomic) NSString name;
@property (nonatomic) I version;
- (id)initWithName:version:;
- (id)init;
- (unsigned int)version;
- (id)initWithDictionary:error:;
- (void)allowEvaluation;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)name;
- (BOOL)allowsEvaluation;
- (BOOL)isEvaluationBlocked;
- (void)setEvaluationBlocked:;
+ (id)new;
+ (BOOL)supportsSecureCoding;
+ (id)name;
@end
