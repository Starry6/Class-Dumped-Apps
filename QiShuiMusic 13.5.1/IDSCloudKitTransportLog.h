@interface IDSCloudKitTransportLog : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) IDSCKDatabase database;
- (void).cxx_destruct;
- (id)database;
- (id)queue;
- (void)fetchChangesSinceToken:completion:;
- (id)initWithDatabase:queue:;
- (id)_recordIDsToFetch;
- (void)createZone:;
- (void)dropZone:;
- (id)_transportRecordZoneID;
- (void)disabled_fetchChangesSinceToken:completion:;
+ (id)_messageFromRecord:;
@end
