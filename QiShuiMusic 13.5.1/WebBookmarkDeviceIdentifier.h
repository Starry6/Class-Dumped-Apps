@interface WebBookmarkDeviceIdentifier : NSObject
@property (nonatomic) BOOL listensForMetaDataChangeNotification;
@property (nonatomic) NSUUID UUID;
@property (nonatomic) BOOL encounteredErrorWhileObtainingUUID;
@property (nonatomic) BOOL readOnly;
- (BOOL)isReadOnly;
- (void)setReadOnly:;
- (void)dealloc;
- (void)_setUpWithPlistURL:readOnly:queue:;
- (BOOL)_listensForMetaDataChangeNotification;
- (BOOL)encounteredErrorWhileObtainingUUID;
- (void)_metaDataDidChange:;
- (void)stopObservingChanges;
- (void)_resumeMonitoringMetaDataFile;
- (void)_createOrLoadMetaData;
- (void)_setListensForMetaDataChangeNotification:;
- (void)_cancelMonitoringMetaDataFile;
- (id)initWithPlistURL:readOnly:;
- (void).cxx_destruct;
- (id)description;
- (id)UUID;
+ (void)clearDeviceIdentifierWithPlistURL:;
+ (void)_postWebBookmarkMetaDataChangeDistributedNotification:;
@end
