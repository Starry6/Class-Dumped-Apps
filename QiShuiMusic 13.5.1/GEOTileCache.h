@interface GEOTileCache : NSObject
@property (nonatomic) Q currentCount;
@property (nonatomic) Q currentCost;
@property (nonatomic) Q maxCapacity;
@property (nonatomic) Q maxCost;
- (void)enumerate:;
- (unsigned long long)currentCount;
- (unsigned long long)currentCost;
- (void)removeTilesWithKeys:;
- (void)removeTileForKey:;
- (void)_receivedMemoryNotification;
- (void)setTile:forKey:cost:;
- (unsigned long long)maxCost;
- (id)init;
- (void)dealloc;
- (id)_description;
- (unsigned long long)maxCapacity;
- (void)_enteredBackground:;
- (void)setMaxCost:;
- (id)tileForKey:;
- (void)removeAllObjects;
- (void)_evictWithMaxCost:maxCapacity:;
- (void)setMaxCapacity:;
- (void).cxx_destruct;
- (id)description;
- (void)removeTilesMatchingPredicate:;
- (BOOL)containsKey:cost:;
- (void)_removeTileForKey:;
@end
