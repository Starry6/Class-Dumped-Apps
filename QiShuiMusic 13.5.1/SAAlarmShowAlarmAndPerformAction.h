@interface SAAlarmShowAlarmAndPerformAction : SAUISnippet
@property (nonatomic) <SAAlarmAlarmAction> alarmAction;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)alarmAction;
- (void)setAlarmAction:;
+ (id)showAlarmAndPerformAction;
+ (id)showAlarmAndPerformActionWithDictionary:context:;
@end
