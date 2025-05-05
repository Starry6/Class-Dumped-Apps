@interface MFMailMessageLibrarySetThreadSendersRecipientsConflictResolutionUpgradeStep : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (int)runWithConnection:;
+ (id)threadSendersTableSchema;
+ (id)threadRecipientsTableSchema;
+ (id)_schemaWithThreadsTable:;
@end
