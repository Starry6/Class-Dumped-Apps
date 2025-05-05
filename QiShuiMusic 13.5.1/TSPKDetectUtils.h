@interface TSPKDetectUtils : NSObject
+ (id)createSnapshotStringWithDict:key:atTimeStamp:inCondition:;
+ (id)createSnapshotWithDataDict:atTimeStamp:lastCleanTime:inCondition:;
+ (id)createSnapshotWithDataDict:atTimeStamp:lastCleanTime:inCondition:instanceAddress:;
@end
