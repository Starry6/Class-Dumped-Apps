@interface LSDatabaseContext : NSObject
@property (nonatomic) BOOL canAccess;
@property (nonatomic) BOOL accessing;
@property (nonatomic) NSData currentPersistentIdentifier;
- (id)init;
- (void)accessCurrentUserSessionUsingBlock:;
- (BOOL)startAccessingWithOptions:error:;
- (id)currentPersistentIdentifier;
- (void)accessWithOptions:usingBlock:;
- (void)getSystemContentDatabaseObject4WebKit:;
- (void)observeDatabaseChange4WebKit:;
- (void)stopAccessing;
- (BOOL)startAccessingReturningError:;
- (BOOL)startAccessingWithUserID:options:error:;
- (void)accessWithUserID:options:usingBlock:;
- (BOOL)startAccessingWithUserID:error:;
- (void)accessUsingBlock:;
- (BOOL)canAccess;
- (void)releaseObservedDatabase4WebKit;
- (BOOL)startAccessingSystemScopeReturningError:;
- (void)accessWithUserID:usingBlock:;
- (id)addDatabaseChangeObserver4WebKit:;
- (BOOL)isAccessing;
- (BOOL)startAccessingCurrentUserSessionReturningError:;
- (id)_init;
- (void)removeDatabaseChangeObserver4WebKit:;
- (void)accessSystemScopeUsingBlock:;
+ (id)new;
+ (id)sharedDatabaseContext;
@end
