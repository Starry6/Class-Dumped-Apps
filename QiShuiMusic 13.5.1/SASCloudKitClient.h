@interface SASCloudKitClient : NSObject
@property (nonatomic) CKContainer container;
@property (nonatomic) CKDatabase database;
@property (nonatomic) NSObject<OS_dispatch_queue> callbackQueue;
@property (nonatomic) NSObject<OS_xpc_object> xpcActivity;
- (void)setContainer:;
- (id)container;
- (void)setDatabase:;
- (void)setCallbackQueue:;
- (void)setXpcActivity:;
- (id)callbackQueue;
- (id)xpcActivity;
- (void).cxx_destruct;
- (id)database;
- (id)initWithDatabase:inContainer:callbackQueue:;
- (id)initWithContainerIdentifier:callbackQueue:;
- (void)fetchCurrentDeviceIDWithCompletion:;
- (void)fetchRecordZone:group:completion:;
- (void)saveRecordZone:group:completion:;
- (void)fetchRecords:inZone:group:completion:;
- (void)saveRecord:group:completion:;
- (void)_scheduleDatabaseOperation:;
@end
