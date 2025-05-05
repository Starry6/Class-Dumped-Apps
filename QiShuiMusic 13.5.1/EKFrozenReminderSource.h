@interface EKFrozenReminderSource : EKFrozenReminderObject
@property (nonatomic) NSString sourceIdentifier;
@property (nonatomic) REMAccount remAccount;
- (id)syncError;
- (id)lastSyncStartDate;
- (long long)sourceType;
- (id)externalID;
- (id)sourceIdentifier;
- (id)defaultAlarmOffset;
- (BOOL)disabled;
- (void)setLastSyncStartDate:;
- (id)lastSyncEndDate;
- (id)title;
- (int)managedConfigurationAccountAccess;
- (void)setLastSyncEndDate:;
- (void)setSyncError:;
- (int)flags;
- (id)constraintsName;
- (id)UUID;
- (id)delegatedAccountOwnerStoreID;
- (id)meltedObjectInStore:;
- (id)remAccount;
+ (Class)meltedClass;
@end
