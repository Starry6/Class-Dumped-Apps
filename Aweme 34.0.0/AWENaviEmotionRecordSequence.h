@interface AWENaviEmotionRecordSequence : NSObject
@property (nonatomic) NSMutableDictionary steps;
@property (nonatomic) q runningStep;
@property (nonatomic) q addingStep;
@property (nonatomic) @? onCompletion;
- (long long)addingStep;
- (void)setAddingStep:;
- (long long)runningStep;
- (void)setRunningStep:;
- (id)init;
- (id)steps;
- (void).cxx_destruct;
- (void)reset;
- (void)setSteps:;
- (void)addStep:;
- (id)onCompletion;
- (void)setOnCompletion:;
- (void)stepForward;
@end
