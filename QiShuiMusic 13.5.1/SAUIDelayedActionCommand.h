@interface SAUIDelayedActionCommand : SADomainCommand
@property (nonatomic) NSArray commands;
@property (nonatomic) NSNumber timerValue;
- (id)groupIdentifier;
- (id)timerValue;
- (BOOL)requiresResponse;
- (id)commands;
- (id)encodedClassName;
- (void)setCommands:;
- (void)setTimerValue:;
+ (id)delayedActionCommand;
+ (id)delayedActionCommandWithDictionary:context:;
@end
