@interface PLCloudFeedEntriesChangeNotification : PLChangeNotification
@property (nonatomic) BOOL shouldReload;
@property (nonatomic) NSSet insertedEntries;
@property (nonatomic) NSSet updatedEntries;
@property (nonatomic) NSSet deletedEntries;
- (id)userInfo;
- (void)setShouldReload:;
- (BOOL)shouldReload;
- (void).cxx_destruct;
- (id)object;
- (id)name;
- (id)_initWithFullReload;
- (id)_initWithInsertedEntries:updatedEntries:deletedEntries:;
- (id)insertedEntries;
- (void)setInsertedEntries:;
- (id)updatedEntries;
- (void)setUpdatedEntries:;
- (id)deletedEntries;
- (void)setDeletedEntries:;
+ (id)notificationWithFullReload;
+ (id)notificationWithInsertedEntries:updatedEntries:deletedEntries:;
@end
