@interface MFMailMessageLibraryRebuildThreadsTableUpgradeStep : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (int)runWithConnection:;
+ (id)_threadsTableSchemaWithMessagesTable:conversationsTable:threadScopesTable:;
@end
