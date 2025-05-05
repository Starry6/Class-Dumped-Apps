@interface SATimerShowAndPerformTimerAction : SABaseClientBoundCommand
@property (nonatomic) <SATimerTimerAction> timerAction;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)timerAction;
- (void)setTimerAction:;
+ (id)showAndPerformTimerAction;
+ (id)showAndPerformTimerActionWithDictionary:context:;
@end
