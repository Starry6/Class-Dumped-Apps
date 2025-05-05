@interface SAAlarmShowAndPerformAlarmAction : SABaseClientBoundCommand
@property (nonatomic) <SAAlarmAlarmAction> alarmAction;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)alarmAction;
- (void)setAlarmAction:;
+ (id)showAndPerformAlarmAction;
+ (id)showAndPerformAlarmActionWithDictionary:context:;
@end
