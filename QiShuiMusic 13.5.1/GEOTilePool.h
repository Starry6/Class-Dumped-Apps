@interface GEOTilePool : NSObject
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
- (unsigned long long)maxCapacity;
- (void)_enteredBackground:;
- (void)setMaxCost:;
- (id)tileForKey:;
- (void)removeAllObjects;
- (void)setMaxCapacity:;
- (void).cxx_destruct;
- (id)initWithSideCacheEnabled:;
- (void)removeTilesMatchingPredicate:;
- (BOOL)containsKey:cost:;
- (id).cxx_construct;
@end
