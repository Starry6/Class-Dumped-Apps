@interface PAAccessRecordAccumulator : NSObject
@property (nonatomic) <PAAccessRecord> record;
@property (nonatomic) NSMutableDictionary ongoingIntervals;
@property (nonatomic) NSMutableSet seenEvents;
- (id)init;
- (id)record;
- (void).cxx_destruct;
- (void)setRecord:;
- (id)ongoingIntervals;
- (id)seenEvents;
@end
