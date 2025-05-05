@interface OSLogEventSource : NSObject
@property (nonatomic) NSMutableArray _fileRefs;
@property (nonatomic) ^{_os_timesync_db_s=} tsdb;
@property (nonatomic) _OSLogCollectionReference lcr;
@property (nonatomic) _OSLogEventStoreMetadata lesm;
@property (nonatomic) _OSLogEventStoreTimeRef oldestTimeRef;
@property (nonatomic) _OSLogEventStoreTimeRef newestTimeRef;
@property (nonatomic) NSUUID uniqueIdentifier;
@property (nonatomic) NSDate oldestDate;
@property (nonatomic) NSDate newestDate;
- (id)_fileRefs;
- (void)dealloc;
- (id)uniqueIdentifier;
- (id)initWithCollection:metadata:timesync:;
- (id)lcr;
- (void)_enumerateIndexFiles:;
- (id)newestTimeRef;
- (void)set_fileRefs:;
- (id)lesm;
- (id)oldestTimeRef;
- (void)_insertIndexFile:;
- (void).cxx_destruct;
- (id)newestDate;
- (id)oldestDate;
- (id)tsdb;
@end
