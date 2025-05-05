@interface SAReminderSnooze : SABaseClientBoundCommand
@property (nonatomic) SAReminderDateTimeTriggerOffset offset;
@property (nonatomic) NSArray reminderIdentifierList;
- (void)setOffset:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)offset;
- (id)encodedClassName;
- (id)reminderIdentifierList;
- (void)setReminderIdentifierList:;
+ (id)snooze;
+ (id)snoozeWithDictionary:context:;
@end
