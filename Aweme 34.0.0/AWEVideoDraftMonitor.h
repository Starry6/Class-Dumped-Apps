@interface AWEVideoDraftMonitor : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) NSDateFormatter formatter;
- (id)serialQueue;
- (id)formatter;
- (void)setSerialQueue:;
- (void)setFormatter:;
- (void).cxx_destruct;
+ (void)recordDraftInvisibleWithDraftIds:;
+ (void)checkDraftLostWithVisibleDrafts:;
+ (void)recordDraftInvisibleWithDrafts:;
+ (void)recordDraftTimelineWithId:descFormat:;
+ (id)draftTimeLineInfoWithDraftIds:;
+ (id)userSavedKey;
+ (void)recordDraftVisibleByUserWithId:;
+ (id)storage;
+ (id)sharedMonitor;
@end
