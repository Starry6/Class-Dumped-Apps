@interface PAAccessPublisherPipelines : NSObject
+ (id)accessPublisherWithoutHiddenOrMissingApps:;
+ (id)accessPublisherWithoutHiddenOrMissingApps:withBundleLookup:;
+ (id)accessPublisherWithoutOutOfProcessPickerAccesses:;
+ (id)accessPublisherWithoutUnknownCategoryAccesses:;
+ (id)accessRecordsFromPublisher:;
+ (id)accessRecordsFromPublisher:reversed:;
+ (id)ongoingAccessRecordsFromPublisher:;
+ (id)coalesceAccessRecordsFromPublisher:withCoalescingWindowDuration:reversed:;
+ (id)completeAccessRecordFromPartialAccessRecord:nextAccessPublisher:;
+ (id)completeAccessRecordFromPartialAccessRecord:nextStartTime:accessPublisher:;
+ (id)findBeginningForPartialAccessRecord:iteration:nextStartTime:endTime:accessPublisher:;
+ (double)nextStartTimeForEndTime:iteration:;
@end
