@interface PLIndexMapper : NSObject
- (id)initWithDataSource:;
- (BOOL)applyContainerChangeNotification:changeTypes:toFilteredIndexes:;
- (unsigned long long)backingIndexForIndex:;
- (id)backingIndexesForIndexes:;
- (unsigned long long)indexForBackingIndex:;
- (id)indexesForBackingIndexes:;
@end
