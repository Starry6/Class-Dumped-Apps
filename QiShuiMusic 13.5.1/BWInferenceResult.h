@interface BWInferenceResult : NSObject
@property (nonatomic) NSInteger inferenceType;
@property (nonatomic) {?=qiIq} timestamp;
@property (nonatomic) NSDictionary inferences;
@property (nonatomic) NSString preventionReason;
@property (nonatomic) BOOL valid;
- (id)preventionReason;
- (id)initWithInferenceType:preventionReason:atTimestamp:;
- (void)dealloc;
- (id)initWithInferenceType:inferences:atTimestamp:;
- (BOOL)isValid;
- (id)initWithResult:replacementInferences:replacementPreventionReason:;
- (id)timestamp;
- (id)description;
- (int)inferenceType;
- (id)inferences;
@end
