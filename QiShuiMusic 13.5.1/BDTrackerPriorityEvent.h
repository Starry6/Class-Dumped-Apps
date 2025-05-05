@interface BDTrackerPriorityEvent : NSObject
@property (nonatomic) BDTrackerBaseTable table;
@property (nonatomic) NSString eventType;
@property (nonatomic) BOOL isSessionEvent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)appendEventToData:sendingDataType:;
- (void)clearAllEventData;
- (void)deleteTrackCreatedBefore:;
- (unsigned long long)insertTrack:trackID:;
- (BOOL)isSessionEvent;
- (void)onBatchEndWithResultSuccess:;
- (void)removeTracksByID:;
- (void)setIsSessionEvent:;
- (void)trigerAutoVacuum;
- (id)initWithPriority:;
- (void)setTable:;
- (id)table;
- (BOOL)hasData;
- (id)eventType;
- (void)setEventType:;
- (void).cxx_destruct;
+ (id)dbPathWithPriority:;
@end
