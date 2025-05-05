@interface BWFusionTrackerEspressoInferenceProvider : BWEspressoInferenceProvider
@property (nonatomic) q operation;
@property (nonatomic) BOOL mustExecuteWhenAllowed;
@property (nonatomic) NSInteger type;
@property (nonatomic) <BWInferenceExecutable> executable;
@property (nonatomic) <BWInferenceSubmittable> submittable;
@property (nonatomic) <BWInferenceExtractable> extractable;
@property (nonatomic) <BWInferencePropagatable> propagatable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)mustExecuteWhenAllowed;
- (long long)operation;
- (id)preventionReasonWithSampleBuffer:executionTime:;
- (void)setOperation:;
- (int)submitForSampleBuffer:usingStorage:withSubmissionTime:workQueue:completionHandler:;
@end
