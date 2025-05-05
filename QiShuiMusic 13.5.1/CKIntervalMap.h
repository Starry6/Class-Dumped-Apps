@interface CKIntervalMap : NSObject
@property (nonatomic) CKIntervalMapRangeMapContainer rangeMap;
@property (nonatomic) BOOL dirty;
- (void)setDirty:;
- (id)init;
- (BOOL)containsIndex:;
- (BOOL)dirty;
- (void).cxx_destruct;
- (id)description;
- (BOOL)containsIndexes:;
- (id)rangeMap;
- (void)maintainInvariants;
- (id)allIndexes;
- (void)enumerateObjectsForIndexes:usingBlock:;
@end
