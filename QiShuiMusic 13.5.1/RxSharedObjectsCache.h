@interface RxSharedObjectsCache : NSObject
@property (nonatomic) NSMutableDictionary cache;
- (id)init;
- (void)setCache:;
- (void)addObject:;
- (void)removeObject:;
- (void).cxx_destruct;
- (id)cache;
- (id)allObjectsWithClass:;
@end
