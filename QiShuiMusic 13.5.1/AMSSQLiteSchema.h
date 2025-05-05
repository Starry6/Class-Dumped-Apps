@interface AMSSQLiteSchema : NSObject
@property (nonatomic) q currentUserVersion;
- (BOOL)migrateToVersion:usingBlock:;
- (void)_setUserVersion:;
- (long long)currentUserVersion;
- (BOOL)tableExists:;
- (BOOL)column:existsInTable:;
- (void).cxx_destruct;
- (id)initWithConnection:;
@end
