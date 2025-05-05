@interface BDTrackerCacheTable : NSObject
@property (nonatomic) NSArray sendingTrackIDs;
@property (nonatomic) NSMutableDictionary data;
@property (nonatomic) NSString tableName;
@property (nonatomic) Q length;
@property (nonatomic) Q sendingLength;
- (id)sendingTrackIDs;
- (void)appendEventToData:sendingDataType:;
- (void)clearAllEventData;
- (void)insertTrack:eventType:trackID:length:;
- (void)onBatchEndWithResultSuccess:;
- (unsigned long long)sendingLength;
- (void)setSendingLength:;
- (void)setSendingTrackIDs:;
- (id)initWithTableName:;
- (id)data;
- (id)tableName;
- (BOOL)hasData;
- (void)setTableName:;
- (void).cxx_destruct;
- (void)setData:;
- (unsigned long long)length;
- (void)setLength:;
@end
