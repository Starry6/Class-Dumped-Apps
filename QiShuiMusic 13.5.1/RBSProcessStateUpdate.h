@interface RBSProcessStateUpdate : NSObject
@property (nonatomic) RBSProcessHandle process;
@property (nonatomic) RBSProcessState state;
@property (nonatomic) RBSProcessState previousState;
@property (nonatomic) RBSProcessExitEvent exitEvent;
- (id)state;
- (id)process;
- (id)exitEvent;
- (void).cxx_destruct;
- (id)description;
- (id)previousState;
+ (id)updateWithState:previousState:exitEvent:;
@end
