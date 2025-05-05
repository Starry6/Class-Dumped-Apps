@interface SAReminderListObject : SADomainObject
@property (nonatomic) NSString accountName;
@property (nonatomic) NSString name;
@property (nonatomic) SAReminderRecurrence recurrence;
@property (nonatomic) SAReminderTrigger reminderTrigger;
@property (nonatomic) NSArray reminders;
@property (nonatomic) NSArray remindersToCreate;
@property (nonatomic) NSNumber totalNumOfReminders;
- (void)setName:;
- (id)groupIdentifier;
- (void)setAccountName:;
- (id)encodedClassName;
- (id)name;
- (id)accountName;
- (id)recurrence;
- (void)setRecurrence:;
- (id)reminders;
- (void)setReminders:;
- (id)reminderTrigger;
- (void)setReminderTrigger:;
- (id)remindersToCreate;
- (void)setRemindersToCreate:;
- (id)totalNumOfReminders;
- (void)setTotalNumOfReminders:;
+ (id)listObject;
+ (id)listObjectWithDictionary:context:;
@end
