@interface SAAlarmDismiss : SADomainCommand
@property (nonatomic) NSArray alarmIds;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)alarmIds;
- (void)setAlarmIds:;
+ (id)dismiss;
+ (id)dismissWithDictionary:context:;
@end
