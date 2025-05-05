@interface NSCKRecordZoneMoveReceipt : NSManagedObject
@property (nonatomic) NSString recordName;
@property (nonatomic) NSString zoneName;
@property (nonatomic) NSString ownerName;
@property (nonatomic) BOOL needsCloudDelete;
@property (nonatomic) NSDate movedAt;
@property (nonatomic) NSCKRecordMetadata recordMetadata;
- (id)createRecordIDForMovedRecord;
+ (id)entityPath;
+ (id)countMoveReceiptsInStore:matchingPredicate:withManagedObjectContext:error:;
+ (id)moveReceiptsMatchingRecordIDs:inManagedObjectContext:persistentStore:error:;
@end
