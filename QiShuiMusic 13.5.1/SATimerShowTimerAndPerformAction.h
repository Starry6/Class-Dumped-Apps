@interface SATimerShowTimerAndPerformAction : SAUISnippet
@property (nonatomic) <SATimerTimerAction> timerAction;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)timerAction;
- (void)setTimerAction:;
+ (id)showTimerAndPerformAction;
+ (id)showTimerAndPerformActionWithDictionary:context:;
@end
