@interface AWEDataLayerFastMap : NSObject
- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (void)enumerateKeysAndObjectsUsingBlock:;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (id)allObjects;
@end
