@interface EDSendLaterPersistence : NSObject
@property (nonatomic) EDPersistenceDatabase database;
@property (nonatomic) NSObject<OS_dispatch_queue> writeQueue;
@property (nonatomic) <EDMessageChangeHookResponder> hookResponder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDatabase:;
- (void).cxx_destruct;
- (id)hookResponder;
- (id)database;
- (id)writeQueue;
- (void)setWriteQueue:;
- (id)initWithDatabase:hookResponder:;
- (void)persistSendLaterForMessages:date:;
+ (id)log;
+ (id)tablesAndForeignKeysToResolve:associationsToResolve:;
@end
