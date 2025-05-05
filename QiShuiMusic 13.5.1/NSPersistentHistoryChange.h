@interface NSPersistentHistoryChange : NSObject
@property (nonatomic) q changeID;
@property (nonatomic) NSManagedObjectID changedObjectID;
@property (nonatomic) q changeType;
@property (nonatomic) NSDictionary tombstone;
@property (nonatomic) NSPersistentHistoryTransaction transaction;
@property (nonatomic) NSSet updatedProperties;
- (id)_pl_prettyDescriptionWithIndent:;
- (long long)changeType;
- (id)transaction;
- (id)changedObjectID;
- (long long)changeID;
- (id)tombstone;
- (id)description;
- (id)updatedProperties;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)stringForChangeType:;
+ (id)entityDescriptionWithContext:;
+ (id)shortStringForChangeType:;
+ (id)fetchRequest;
+ (id)entityDescription;
@end
