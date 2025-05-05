@interface NSSQLRow : NSPersistentCacheRow
- (id)valueForKey:;
- (id)knownKeyValuesPointer;
- (id)objectID;
- (void)setObjectID:;
- (void)dealloc;
- (id)copy;
- (unsigned int)_versionNumber;
- (unsigned long long)version;
- (id)_snapshot_;
- (void)setForeignEntityKeySlot:entityKey:;
- (void)setForeignKeySlot:int64:;
- (id)initWithSQLEntity:objectID:;
- (id)description;
- (void)setOptLock:;
- (void)setForeignOrderKeySlot:orderKey:;
- (id)initWithSQLEntity:ownedObjectID:andTimestamp:;
- (BOOL)isEqual:;
- (id)newObjectIDForToOne:;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (unsigned int)newBatchRowAllocation:count:forSQLEntity:withOwnedObjectIDs:andTimestamp:;
@end
