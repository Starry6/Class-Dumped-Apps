@interface SSEventsTableBase : NSObject
- (id)init;
- (BOOL)_setupDatabase;
- (void).cxx_destruct;
- (void)performTransactionWithBlock:;
+ (id)databasePath;
@end
