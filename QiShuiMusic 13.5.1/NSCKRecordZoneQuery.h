@interface NSCKRecordZoneQuery : NSManagedObject
@property (nonatomic) NSCKRecordZoneMetadata recordZone;
@property (nonatomic) NSString recordType;
@property (nonatomic) NSDate lastFetchDate;
@property (nonatomic) NSDate mostRecentRecordModificationDate;
@property (nonatomic) NSPredicate predicate;
@property (nonatomic) CKQueryCursor queryCursor;
+ (id)entityPath;
@end
