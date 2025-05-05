@interface EFMutableInt64Set : NSObject
- (void)dealloc;
- (id)getIndexesInRange:maxCount:;
- (void)addIndex:;
- (unsigned long long)getIndexes:maxCount:inIndexRange:;
- (void)_garbageCollectStorageIfNecessary;
- (long long)_insertionPositionOfIndex:;
- (void)removeIndex:;
- (void)removeIndexes:;
- (long long)indexGreaterThanIndex:;
- (BOOL)containsIndex:;
- (void)enumerateIndexesUsingBlock:;
- (long long)_positionOfIndex:;
- (long long)firstIndex;
- (unsigned long long)_enumerateIndexesInRange:maxCount:withBlock:;
- (long long)lastIndex;
- (id)description;
- (void)removeAllIndexes;
- (id)commaSeparatedString;
- (void)intersectIndexes:;
- (id)mutableCopyWithZone:;
- (void)_incrementStorageIfNecessaryForCount:;
- (unsigned long long)count;
- (void)addIndexes:;
- (id)copyWithZone:;
- (id)getMaxCountOfIndexes:;
+ (id)indexSet;
+ (id)indexSetWithIndexesInRange:;
@end
