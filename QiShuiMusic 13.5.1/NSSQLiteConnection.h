@interface NSSQLiteConnection : NSObject
- (void)execute;
- (void)dealloc;
- (void)setExclusiveLockingMode:;
- (id)adapter;
- (id)initAsQueryGenerationTrackingConnectionForSQLCore:;
- (int)registerCurrentQueryGenerationWithStore:;
- (id)sqlStatement;
- (id)initForSQLCore:;
@end
