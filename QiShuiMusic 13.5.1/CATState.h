@interface CATState : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) : enterAction;
@property (nonatomic) : exitAction;
- (SEL)exitAction;
- (id)init;
- (void)setEnterAction:;
- (void)addTransitionToState:triggeringEvent:;
- (id)initWithName:;
- (SEL)enterAction;
- (id)transitionWithTriggeringEvent:;
- (void)addTransitionToState:triggeringEvent:action:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)setExitAction:;
+ (id)new;
@end
