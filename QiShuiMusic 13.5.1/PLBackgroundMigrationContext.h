@interface PLBackgroundMigrationContext : NSObject
@property (nonatomic) PLCoreAnalyticsEventManager analyticsEventManager;
@property (nonatomic) PLDatabaseContext databaseContext;
@property (nonatomic) PLPhotoLibraryPathManager pathManager;
@property (nonatomic) I policy;
@property (nonatomic) q libraryIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPolicy:;
- (id)pathManager;
- (void)setDatabaseContext:;
- (unsigned int)policy;
- (void)setPathManager:;
- (long long)libraryIdentifier;
- (void).cxx_destruct;
- (id)analyticsEventManager;
- (id)databaseContext;
- (void)setAnalyticsEventManager:;
- (void)setLibraryIdentifier:;
- (id)initWithPathManager:databaseContext:analyticsEventManager:;
@end
