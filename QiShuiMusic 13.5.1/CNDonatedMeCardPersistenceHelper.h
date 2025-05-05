@interface CNDonatedMeCardPersistenceHelper : NSObject
+ (id)mutableCopyOfContact:byCopyingValuesForKeysOnly:;
+ (id)mutableCopyOfContact:byCopyingModificationsAndValuesForKeysOnly:;
+ (BOOL)createNewMeContact:inStore:;
+ (id)defaultKeysForValuesToPersist;
+ (id)propertyGroupItemLog;
@end
