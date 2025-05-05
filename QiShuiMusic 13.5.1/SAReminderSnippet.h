@interface SAReminderSnippet : SAUISnippet
@property (nonatomic) NSArray reminderLists;
@property (nonatomic) NSArray reminders;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)reminders;
- (id)reminderLists;
- (void)setReminderLists:;
- (void)setReminders:;
+ (id)snippet;
+ (id)snippetWithDictionary:context:;
@end
