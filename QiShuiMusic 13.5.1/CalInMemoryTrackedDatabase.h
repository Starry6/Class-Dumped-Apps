@interface CalInMemoryTrackedDatabase : NSObject
@property (nonatomic) CalDatabaseInMemoryChangeTracking database;
@property (nonatomic) NSHashTable clients;
@property (nonatomic) BOOL hasClients;
- (BOOL)hasClients;
- (id)init;
- (id)clients;
- (void).cxx_destruct;
- (id)database;
@end
