@interface TRIPersistedEvaluationStatus : TRIPBMessage
@property (nonatomic) I type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSString evaluationId;
@property (nonatomic) BOOL hasEvaluationId;
@property (nonatomic) TRIPBTimestamp timestamp;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) TRIPersistedFactorsState evalState;
@property (nonatomic) BOOL hasEvalState;
+ (id)descriptor;
@end
