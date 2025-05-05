@interface PuzzleMOCache : NSObject
@property (nonatomic) BDXThreadSafeDictionary cacheMap;
- (void)_cleanNilObjects;
- (id)getObjectForIdentifier:;
- (void)setObject:forIdentifier:;
- (id)init;
- (id)cachedObjects;
- (void)setCacheMap:;
- (void).cxx_destruct;
- (id)cacheMap;
@end
