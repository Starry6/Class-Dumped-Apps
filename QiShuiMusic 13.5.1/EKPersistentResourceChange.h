@interface EKPersistentResourceChange : EKPersistentObject
- (unsigned int)changeType;
- (id)calendar;
- (id)notification;
- (id)deleteCount;
- (id)calendarItem;
- (int)entityType;
- (id)timestamp;
- (unsigned int)changedProperties;
- (id)updateCount;
- (BOOL)alerted;
- (id)changedByDisplayName;
- (id)changedByAddress;
- (id)changedByFirstName;
- (id)changedByLastName;
- (id)createCount;
- (id)deletedTitle;
- (unsigned int)publicStatus;
+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
@end
