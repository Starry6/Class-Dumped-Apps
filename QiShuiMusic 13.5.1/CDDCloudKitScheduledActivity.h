@interface CDDCloudKitScheduledActivity : NSManagedObject
@property (nonatomic) NSNumber activityTypeNum;
@property (nonatomic) NSUUID activityUUID;
@property (nonatomic) Q activityType;
@property (nonatomic) NSDate scheduledAt;
@property (nonatomic) CDDCloudKitRegisteredClient registeredClient;
@property (nonatomic) NSNumber isUserRequestedBackupTask;
- (unsigned long long)activityType;
- (void)setActivityType:;
- (id)xpcActivityCriteria;
- (void)populateFromCriteria:;
+ (id)entityName;
@end
