@interface EDReadLaterPersistence : NSObject
@property (nonatomic) EDPersistenceDatabase database;
@property (nonatomic) EDPersistenceHookRegistry hookRegistry;
@property (nonatomic) EDReadLaterCloudStorage cloudStorage;
@property (nonatomic) BOOL hasReadLaterMessages;
- (void)scheduleRecurringActivity;
- (void)setDatabase:;
- (id)cloudStorageReadLaterDateForMessage:;
- (void)setCloudStorage:;
- (id)initWithDatabase:hookRegistry:;
- (void).cxx_destruct;
- (id)hookRegistry;
- (id)cloudStorage;
- (id)database;
- (void)setHookRegistry:;
- (BOOL)hasReadLaterMessages;
- (void)persistReadLaterForMessage:date:;
- (void)removeReadLaterForMessage:;
- (void)_persistReadLater:date:;
- (void)_removeReadLater:;
- (void)_resetDisplayDateForMessage:connection:;
+ (id)tablesAndForeignKeysToResolve:associationsToResolve:;
@end
