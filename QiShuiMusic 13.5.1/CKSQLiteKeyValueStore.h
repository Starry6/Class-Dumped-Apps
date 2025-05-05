@interface CKSQLiteKeyValueStore : CKSQLiteDatabaseTable
- (id)finishInitializing:;
- (void)purgeOrphanedTableGroupKeys;
- (void)purgeOrphanedTableKeys;
- (void)purgeOrphanedKeys;
- (id)numberValueForKey:scope:scopeIdentifier:;
- (void)setNumberValue:forKey:scope:scopeIdentifier:;
- (id)stringValueForKey:scope:scopeIdentifier:;
- (void)setStringValue:forKey:scope:scopeIdentifier:;
- (id)dataValueForKey:scope:scopeIdentifier:;
- (void)setDataValue:forKey:scope:scopeIdentifier:;
- (id)dateValueForKey:scope:scopeIdentifier:;
- (void)setDateValue:forKey:scope:scopeIdentifier:;
- (id)UUIDValueForKey:scope:scopeIdentifier:;
- (void)setUUIDValue:forKey:scope:scopeIdentifier:;
- (id)objectValueForKey:scope:scopeIdentifier:;
- (void)setObjectValue:forKey:scope:scopeIdentifier:;
+ (id)dbProperties;
+ (Class)entryClass;
@end
