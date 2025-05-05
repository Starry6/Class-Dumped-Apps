@interface SSMigrator : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)performMigration:completionBlock:;
@end
