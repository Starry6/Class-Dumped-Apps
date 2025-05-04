@interface AWEDPShieldStep : AWEWorkflowStep
@property (nonatomic) NSString phase;
- (void)onStep:linkSession:;
- (id)initWithPhase:;
- (id)phase;
- (void).cxx_destruct;
- (void)setPhase:;
@end
