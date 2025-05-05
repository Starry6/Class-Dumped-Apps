@interface EDRemoveUnusedSchemaTableUpgradeStep : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)log;
+ (int)runWithConnection:;
+ (int)_recreateMessagesIndices:;
+ (int)_createTempMessagesTable:;
+ (int)_copyMessagesData:;
+ (int)_swapMessagesTables:;
+ (int)_recreateThreadsTable:;
+ (int)_recreateThreadsIndices:;
+ (int)_dropTable:connection:;
+ (int)_truncateTable:connection:;
+ (int)_dropThreadCategoriesIndex:;
@end
