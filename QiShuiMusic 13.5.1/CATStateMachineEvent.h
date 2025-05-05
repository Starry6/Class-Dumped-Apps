@interface CATStateMachineEvent : NSObject
@property (nonatomic) @ trigger;
@property (nonatomic) @ context;
- (id)initWithEventTrigger:context:;
- (id)context;
- (id)trigger;
- (void).cxx_destruct;
- (id)description;
+ (id)eventWithTrigger:context:;
@end
