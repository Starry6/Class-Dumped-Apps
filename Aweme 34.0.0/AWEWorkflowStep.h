@interface AWEWorkflowStep : NSObject
@property (nonatomic) Q stepStatus;
@property (nonatomic) NSError stopError;
- (void)setStepStatus:;
- (void)onStep:linkSession:;
- (void)setStopError:;
- (unsigned long long)stepStatus;
- (void).cxx_destruct;
- (id)stopError;
@end
