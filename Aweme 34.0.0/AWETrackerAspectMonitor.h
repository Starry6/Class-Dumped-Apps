@interface AWETrackerAspectMonitor : NSObject
@property (nonatomic) NSDictionary event2AspectBlocksMap;
@property (nonatomic) NSMutableArray aspectApplyRecords;
- (id)event2AspectBlocksMap;
- (id)aspectApplyRecords;
- (void)monitoredDidApplyAspectsForEvent:trackerContext:applyResult:applyTimeStamp:applyDuration:;
- (void)setupAspectsDictWhenFirstApply:;
- (void)setEvent2AspectBlocksMap:;
- (void)setAspectApplyRecords:;
- (id)init;
- (void).cxx_destruct;
+ (id)aspectApplyRecords;
+ (void)monitoredDidApplyAspectsForEvent:trackerContext:applyResult:applyTimeStamp:applyDuration:;
+ (void)setupAspectsDictWhenFirstApply:;
+ (id)event2AspectsDict;
+ (id)sharedInstance;
+ (void)clearAll;
@end
