@interface IESForestWorkflowStateManager : NSObject
@property (nonatomic) Q state;
- (BOOL)isExpectedState:;
- (id)init;
- (void)setState:;
- (BOOL)updateState:;
- (unsigned long long)state;
@end
