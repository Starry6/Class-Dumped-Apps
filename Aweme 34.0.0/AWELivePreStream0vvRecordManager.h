@interface AWELivePreStream0vvRecordManager : NSObject
@property (nonatomic) NSMutableArray records;
@property (nonatomic) NSMutableArray postedRecords;
- (void)post0vvRecordWithCurrentIndex:withCompleteCallback:;
- (BOOL)hasPost0vvWithRoomId:;
- (void)setPostedRecords:;
- (id)postedRecords;
- (void)track0vvWithRoomIds:;
- (void)record0vvModel:;
- (void)remove0vvRecord:;
- (id)records;
- (void)setRecords:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
