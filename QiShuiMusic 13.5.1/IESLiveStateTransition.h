@interface IESLiveStateTransition : NSObject
@property (nonatomic) IESLiveStateEvent event;
@property (nonatomic) IESLiveStateMachine machine;
@property (nonatomic) IESLiveState sourceState;
@property (nonatomic) IESLiveState targetState;
@property (nonatomic) NSDictionary userInfo;
- (id)machine;
- (id)initForEvent:sourceState:machine:userInfo:;
- (void)setMachine:;
- (void)setEvent:;
- (id)event;
- (id)userInfo;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)targetState;
- (void)setTargetState:;
- (id)sourceState;
- (void)setSourceState:;
+ (id)transitionForEvent:sourceState:machine:;
+ (id)transitionForEvent:sourceState:machine:userInfo:;
@end
