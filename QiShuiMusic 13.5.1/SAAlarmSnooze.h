@interface SAAlarmSnooze : SADomainCommand
@property (nonatomic) NSArray alarmIds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)alarmIds;
- (void)setAlarmIds:;
+ (id)snooze;
+ (id)snoozeWithDictionary:context:;
@end
