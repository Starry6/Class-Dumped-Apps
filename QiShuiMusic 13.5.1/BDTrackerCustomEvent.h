@interface BDTrackerCustomEvent : NSObject
@property (nonatomic) BDTrackerBaseTable table;
@property (nonatomic) NSSet unsupportTables;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)unsupportTables;
- (void)appendEventToData:sendingDataType:;
- (void)clearAllEventData;
- (unsigned long long)collectCustomEvent:data:;
- (void)deleteTrackCreatedBefore:;
- (unsigned long long)insertTrack:trackID:;
- (void)onBatchEndWithResultSuccess:;
- (void)removeTracksByID:;
- (void)setUnsupportTables:;
- (void)trigerAutoVacuum;
- (id)init;
- (void)setTable:;
- (id)table;
- (BOOL)hasData;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
