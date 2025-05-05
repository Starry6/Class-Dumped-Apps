@interface VSStateTransition : NSObject
@property (nonatomic) VSOptional previousState;
@property (nonatomic) VSOptional triggeringEvent;
@property (nonatomic) VSOptional nextState;
- (id)init;
- (void)setPreviousState:;
- (void).cxx_destruct;
- (id)previousState;
- (id)triggeringEvent;
- (id)nextState;
- (void)setNextState:;
- (void)setTriggeringEvent:;
@end
