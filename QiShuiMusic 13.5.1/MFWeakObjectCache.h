@interface MFWeakObjectCache : NSObject
- (id)initWithBlock:;
- (void)removeAllObjects;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
- (id)objectForKey:wasCached:;
- (id)objectForKey:shouldGenerate:wasCached:;
@end
